# flex进行词法分析，bison语法分析
# 运行
bison -d  parse.y
flex lexer.l
gcc parse.tab.c lex.yy.c display.c 
# 查看结果
cat input.c|./a.out 