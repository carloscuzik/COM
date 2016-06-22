delim	[ \t\n]
ws	{delim}+
digito	[0-9]
letra [a-zA-Z]
num	{digito}+(\.{digito}*(E[+-]?{digito}+)?)?
literal \".*\"
id (\_|{letra})+({digito}|\_|{letra})*

%%
{ws}		{}
"return"	{return TRET;}
"if" 		{return TIF;}
"while" 	{return TWHILE;}
"else"		{return TELSE;}
"print"		{return TPRINT;}
"read"		{return TREAD;}
"+"			{return TADD;}
"-"			{return TSUB;}
"*"			{return TMUL;}
"/"			{return TDIV;}
"("			{return TAPAR;}
")"			{return TFPAR;}
"<=" 		{return TMENIGUAL;}
">=" 		{return TMAIIGUAL;}
"<" 		{return TMEN;}
">" 		{return TMAI;}
"!=" 		{return TDIF;}
"==" 		{return TIG;}
"="			{return TIGUAL;}
"&&" 		{return TAND;}
"||" 		{return TOR;}
"!" 		{return TNOT;}
"{" 		{return TACHAVES;}
"}" 		{return TFCHAVES;}
"int" 		{return TINT;}
"String" 	{return TSTRING;}
"void" 		{return TVOID;}
{literal}	{return TLITERAL;}
{id}    	{strcpy(yylval.id,yytext);return TID;}
{num}		{yylval.cconst = atoi(yytext); return TCONST;}
","			{return TVIR;}
";"			{return TPVIR;}
. {printf("Erro Token nao definido\n");}
