/*
*Name:gramtree.l
*Function:词法分析模块，对每个终结符建立一个叶子结点，返回记号，供bison语法分析使用
*/
%{
#include "stdio.h"
#include "stdlib.h"
# include "display.h"
#include "parse.tab.h"
%}
%option yylineno
TYPE int|float|void|char
STRUCT struct
RETURN return
IF if
ELSE else
FOR for
WHILE while
PLUS \+
MINUS -
COMADD \+=
COMSUB \-=
AUTOADD \++
AUTOSUB --
INTEGER [1-9]+[0-9]*|0 
FLOAT   [-+]?[0-9]*[.][0-9]+([eE][+-]?[0-9]*|[0])? 
CHAR \'[^\'\n]*\'
ID [a-z_A-Z][a-zA-Z_0-9]*
SPACE [ \t\r]*
LEFT_SING '
EOL \n
SEMI ;
COMMA ,
ASSIGNOP =
RELOP >|<|>=|<=|==|!=
STAR \*
DIV \/
AND &&
OR \|\|
DOT \.
NOT !
LP \(
RP \)
LB \[
RB \]
LC \{
RC \}
AERROR .
%%
int|float|void|char {yylval.a=newast("TYPE",0,yylineno);return TYPE;}
struct {yylval.a=newast("STRUCT",0,yylineno);return STRUCT;}
{RETURN} {yylval.a=newast("RETURN",0,yylineno); return RETURN;}
{IF} { yylval.a=newast("IF",0,yylineno);return IF;}
{ELSE} {yylval.a=newast("ELSE",0,yylineno); return ELSE;}
{FOR} { yylval.a=newast("FOR",0,yylineno);return FOR;}
{WHILE} {yylval.a=newast("WHILE",0,yylineno); return WHILE;}
{PLUS} {yylval.a=newast("PLUS",0,yylineno); return PLUS;}
{MINUS} {yylval.a=newast("MINUS",0,yylineno); return MINUS;}
{COMADD} {yylval.a=newast("COMADD",0,yylineno); return COMADD;}
{COMSUB} {yylval.a=newast("COMSUB",0,yylineno); return COMSUB;}
{AUTOADD} {yylval.a=newast("AUTOADD",0,yylineno); return AUTOADD;}
{AUTOSUB} {yylval.a=newast("AUTOSUB",0,yylineno); return AUTOSUB;}
{INTEGER} {yylval.a=newast("INTEGER",0,yylineno); return INTEGER;}
{FLOAT} {yylval.a=newast("FLOAT",0,yylineno); return FLOAT;}
{CHAR} {yylval.a=newast("CHAR",0,yylineno); return CHAR;}
{ID} {yylval.a=newast("ID",0,yylineno); return ID;}
{SPACE} {}
{EOL} {}
{LEFT_SING} {yylval.a=newast("LEFT_SING",0,yylineno); return LEFT_SING;}
{SEMI} {yylval.a=newast("SEMI",0,yylineno); return SEMI;}
{COMMA} {yylval.a=newast("COMMA",0,yylineno); return COMMA;}
{ASSIGNOP} {yylval.a=newast("ASSIGNOP",0,yylineno); return ASSIGNOP;}
{RELOP} {yylval.a=newast("RELOP",0,yylineno); return RELOP;}
{STAR} {yylval.a=newast("STAR",0,yylineno); return STAR;}
{DIV} {yylval.a=newast("DIV",0,yylineno); return DIV;}
{AND} {yylval.a=newast("AND",0,yylineno); return AND;}
{OR} {yylval.a=newast("OR",0,yylineno); return OR;}
{DOT} {yylval.a=newast("DOT",0,yylineno); return DOT;}
{NOT} {yylval.a=newast("NOT",0,yylineno); return NOT;}
{LP} {yylval.a=newast("LP",0,yylineno); return LP;}
{RP} {yylval.a=newast("RP",0,yylineno); return RP;}
{LB} {yylval.a=newast("LB",0,yylineno); return LB;}
{RB} {yylval.a=newast("RB",0,yylineno); return RB;}
{LC} {yylval.a=newast("LC",0,yylineno); return LC;}
{RC} {yylval.a=newast("RC",0,yylineno); return RC;}
{AERROR} { printf("Error type A at line %d: Mystirious charachter '%s'\n",yylineno,yytext);}

%%
int yywrap()
{
        return 1;
}


