/*
*Name:gramtree.c
*Function:实现变长参数构造树&遍历树函数&错误处理函数，yyparse()启动文法分析
*/
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<stdarg.h>//变长参数函数所需的头文件
# include"display.h"
# include"parse.tab.h"
int i;
struct ast *newast(char* name,int num,...)//抽象语法树建立
{
    va_list valist; //定义变长参数列表
    struct ast *a=(struct ast*)malloc(sizeof(struct ast));//新生成的父节点
    struct ast *temp=(struct ast*)malloc(sizeof(struct ast));
    if(!a) 
    {
        yyerror("out of space");
        exit(0);
    }
    a->name=name;//语法单元名字
    va_start(valist,num);//初始化变长参数为num后的参数

    if(num>0)//num>0为非终结符：变长参数均为语法树结点，孩子兄弟表示法
    {
        temp=va_arg(valist, struct ast*);//取变长参数列表中的第一个结点设为a的左孩子
        a->l=temp;
        a->line=temp->line;//父节点a的行号等于左孩子的行号

        if(num>=2) //可以规约到a的语法单元>=2
        {
            for(i=0; i<num-1; ++i)//取变长参数列表中的剩余结点，依次设置成兄弟结点
            {
                temp->r=va_arg(valist,struct ast*);
                temp=temp->r;
            }
        }
    }
    else //num==0为终结符或产生空的语法单元：第1个变长参数表示行号，产生空的语法单元行号为-1。
    {
        int t=va_arg(valist, int); //取第1个变长参数
        a->line=t;
        if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE")))//"ID,TYPE,INTEGER，借助union保存yytext的值
        {char*t;t=(char*)malloc(sizeof(char* )*40);strcpy(t,yytext);a->idtype=t;}
        else if(!strcmp(a->name,"INTEGER")) {a->intgr=atoi(yytext);}
        else if(!strcmp(a->name,"FLOAT")) {a->flt=atof(yytext);}
        else if(!strcmp(a->name,"CHAR")) {a->ch=*(yytext+1);}
        else if(!strcmp(a->name,"POINTER"))
        {char*t;t=(char*)malloc(sizeof(char* )*40);strcpy(t,yytext);a->po=t;}
        else {}
    }
    return a;
}

void eval(struct ast *a,int level)//先序遍历抽象语法树
{
    if(a!=NULL)
    {
        for(i=0; i<level; ++i)//孩子结点相对父节点缩进2个空格
            printf("  ");
        if(a->line!=-1){ //产生空的语法单元不需要打印信息
            printf("%s ",a->name);//打印语法单元名字，ID/TYPE/INTEGER要打印yytext的值
            if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE")))printf(":%s ",a->idtype);
            else if(!strcmp(a->name,"INTEGER"))printf(":%d",a->intgr);
            else if(!strcmp(a->name,"FLOAT"))printf(":%f",a->flt);
            else if(!strcmp(a->name,"CHAR"))printf(":%c",a->ch);
            else if(!strcmp(a->name,"POINTER"))printf(":%s",a->po);
            else
                printf("(%d)",a->line);
        }
        printf("\n");

        eval(a->l,level+1);//遍历左子树
        eval(a->r,level);//遍历右子树
    }
}
void yyerror(char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    fprintf(stderr,"%d:error:",yylineno);//错误行号
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}
int main()
{
    printf(">");
    return yyparse(); //启动文法分析，调用词法分析
}

