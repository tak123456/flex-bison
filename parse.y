/*
*Name:parse.y
*Function:bison语法分析，对每条规则 按照孩子兄弟表示法建立语法结点
*/
%{
#include<unistd.h>
#include<stdio.h>   
#include "display.h"
int yylex();
%}

%union{
struct ast* a;
double d;
}
//%token定义终结符的语义值类型，type定义非终结符的语义值类型
%token  <a> INTEGER FLOAT CHAR 
%token <a> TYPE STRUCT RETURN IF ELSE FOR WHILE ID  SPACE LEFT_SING  SEMI COMMA ASSIGNOP RELOP PLUS
MINUS COMADD COMSUB AUTOADD AUTOSUB STAR DIV AND OR DOT NOT LP RP LB RB LC RC AERROR
%token <a> EOL
%type  <a> Program ExtDefList ExtDef ExtDecList Specifire StructSpecifire 
OptTag  Tag VarDec  FunDec  VarList ParamDec  Compst StmtList Stmt DefList Def DecList Dec Exp Args

//优先级
%left COMADD COMSUB
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT AUTOADD AUTOSUB
%left LP RP LB RB DOT
%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE
%%
// 归约到program，开始显示语法树
Program:|ExtDefList {$$=newast("Program",1,$1);printf("打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");}
    ;
//ExtDefList：外部定义列表，即是整个语法树,也有可能整个语法树为空.结点,其第1棵子树对应一个外部变量声明或函数
ExtDefList:ExtDef ExtDefList {$$=newast("ExtDefList",2,$1,$2);}
	| {$$=newast("ExtDefList",0,-1);}
	;
//外部声明，声明外部变量或者声明函数
ExtDef:Specifire ExtDecList SEMI    {$$=newast("ExtDef",3,$1,$2,$3);} //该结点对应一个外部变量声明   
	|Specifire SEMI	{$$=newast("ExtDef",2,$1,$2);}
	|Specifire FunDec Compst	{$$=newast("ExtDef",3,$1,$2,$3);}//该结点对应一个函数定义,类型+函数声明+复合语句
	;
ExtDecList:VarDec {$$=newast("ExtDecList",1,$1);}
	|VarDec COMMA ExtDecList {$$=newast("ExtDecList",3,$1,$2,$3);}
	;
//表示一个类型，int、float和char,struct
Specifire:TYPE {$$=newast("Specifire",1,$1);}
	|StructSpecifire {$$=newast("Specifire",1,$1);}
	;
StructSpecifire:STRUCT OptTag LC DefList RC {$$=newast("StructSpecifire",5,$1,$2,$3,$4,$5);}
	|STRUCT Tag {$$=newast("StructSpecifire",2,$1,$2);}
	;
OptTag:ID {$$=newast("OptTag",1,$1);}
	|{$$=newast("OptTag",0,-1);}
	;
Tag:ID {$$=newast("Tag",1,$1);}
	;
//数组和函数声明
VarDec:ID {$$=newast("VarDec",1,$1);}
	| VarDec LB INTEGER RB {$$=newast("VarDec",4,$1,$2,$3,$4);}
	| VarDec LB  RB {$$=newast("VarDec",3,$1,$2,$3);}
	;
FunDec:ID LP VarList RP {$$=newast("FunDec",4,$1,$2,$3,$4);}
	|ID LP RP {$$=newast("FunDec",3,$1,$2,$3);}
	;
//参数定义列表，有一个到多个参数定义组成，用逗号隔开
VarList:ParamDec COMMA VarList {$$=newast("VarList",3,$1,$2,$3);}
	|ParamDec {$$=newast("VarList",1,$1);}
	;
ParamDec:Specifire VarDec {$$=newast("ParamDec",2,$1,$2);}
    ;
//复合语句，左右分别用大括号括起来，中间有定义列表和语句列表
Compst:LC DefList StmtList RC {$$=newast("Compst",4,$1,$2,$3,$4);}
    | LC  RC {$$=newast("Compst",2,$1,$2);}
	;
//语句列表，由0个或多个语句stmt组成
StmtList:Stmt StmtList{$$=newast("StmtList",2,$1,$2);}
	| {$$=newast("StmtList",0,-1);}
	;
//语句，可能为表达式，复合语句，return语句，if语句，if-else语句，while语句，for
Stmt:Exp SEMI {$$=newast("Stmt",2,$1,$2);}
	|Compst {$$=newast("Stmt",1,$1);}
	|RETURN Exp SEMI {$$=newast("Stmt",3,$1,$2,$3);}
	|IF LP Exp RP Stmt %prec LOWER_THEN_ELSE{$$=newast("IF_THEN",5,$1,$2,$3,$4,$5);}
	|IF LP Exp RP Stmt ELSE Stmt {$$=newast("IF_THEN_ELSE",7,$1,$2,$3,$4,$5,$6,$7);}
	|WHILE LP Exp RP Stmt {$$=newast("WHILE",5,$1,$2,$3,$4,$5);}
	|FOR LP Stmt Stmt Exp RP Stmt {$$=newast("FOR",7,$1,$2,$3,$4,$5,$6,$7);}
	;
//定义列表，由0个或多个定义语句组成
DefList:Def DefList{$$=newast("DefList",2,$1,$2);}
	| {$$=newast("DefList",0,-1);}
	;
//定义一个或多个语句语句，由分号隔开
Def:Specifire DecList SEMI {$$=newast("Def",3,$1,$2,$3);}
	;
//语句列表，由一个或多个语句组成，由逗号隔开，最终都成一个表达式
DecList:Dec {$$=newast("DecList",1,$1);}
	|Dec COMMA DecList {$$=newast("DecList",3,$1,$2,$3);}
	;
//语句，一个变量名称或者一个赋值语句（变量名称等于一个表达式）a[0]=1
Dec:VarDec {$$=newast("Dec",1,$1);}
	|VarDec ASSIGNOP Exp {$$=newast("Dec",3,$1,$2,$3);}
	;
//表达式
Exp:Exp ASSIGNOP Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp AND Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp OR Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp RELOP Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp PLUS Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp MINUS Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp STAR Exp{$$=newast("Exp",3,$1,$2,$3);}
        |Exp DIV Exp{$$=newast("Exp",3,$1,$2,$3);}
		|Exp COMADD Exp{$$=newast("Exp",3,$1,$2,$3);}
		|Exp COMSUB Exp{$$=newast("Exp",3,$1,$2,$3);}
        |LP Exp RP{$$=newast("Exp",3,$1,$2,$3);}
        |MINUS Exp {$$=newast("Exp",2,$1,$2);}
        |NOT Exp {$$=newast("Exp",2,$1,$2);}
		|AUTOADD Exp{$$=newast("Exp",2,$1,$2);}
		|AUTOSUB Exp{$$=newast("Exp",2,$1,$2);}
		|Exp AUTOADD{$$=newast("Exp",2,$1,$2);}
		|Exp AUTOSUB{$$=newast("Exp",2,$1,$2);}
        |ID LP Args RP {$$=newast("Exp",4,$1,$2,$3,$4);}
        |ID LP RP {$$=newast("Exp",3,$1,$2,$3);}
        |Exp LB Exp RB {$$=newast("Exp",4,$1,$2,$3,$4);}
        |Exp DOT ID {$$=newast("Exp",3,$1,$2,$3);}
        |ID {$$=newast("Exp",1,$1);}
        |INTEGER {$$=newast("Exp",1,$1);}
        |FLOAT{$$=newast("Exp",1,$1);}
		|CHAR{$$=newast("Exp",1,$1);}
        ;
//用逗号隔开的参数
Args:Exp COMMA Args {$$=newast("Args",3,$1,$2,$3);}
        |Exp {$$=newast("Args",1,$1);}
        ;
%%

