%{
#include <stdio.h>
#include <stdlib.h>
#include "com.h"
#define YYSTYPE Atributo
%}

%token TADD TMUL TSUB TDIV TAPAR TFPAR TMENIGUAL TMAIIGUAL TMEN TMAI TDIF TIG TAND TNUM TIF TWHILE TELSE
TPRINT TREAD TOR TNOT TACHAVES TIGUAL TFCHAVES TINT TSTRING TVOID TLITERAL TID TVIR TPVIR TRET TCONST
%%

Programa: ListaFuncoes BlocoPrincipal
	| BlocoPrincipal
	;
ListaFuncoes: ListaFuncoes Funcao
	| Funcao
	;
Funcao: TipoRetorno TID TAPAR DeclParametros TFPAR BlocoPrincipal
	| TipoRetorno TID TAPAR TFPAR BlocoPrincipal
	;
TipoRetorno: Tipo
	| TVOID
	;
DeclParametros: DeclParametros TVIR Parametro
	| Parametro
	;
Parametro: Tipo TID
	;
BlocoPrincipal: TACHAVES Declaracoes ListaCmd TFCHAVES
	| TACHAVES ListaCmd TFCHAVES
	;
Declaracoes: Declaracoes Declaracao
	| Declaracao
	;
Declaracao: Tipo ListaId TPVIR{insereNaTabela($2.listaid,$1.tipo);}
	;
Tipo: TINT {$$.tipo = 0;}
	| TSTRING {$$.tipo = 1;}
	;
ListaId: ListaId TVIR TID//{$$.listaid = insere_lista_INT($1.listaid,$3.id);}
	| TID {$$.listaid = inicializa_lista_INT($1.id);}
	;
BLoco: TACHAVES ListaCmd TFCHAVES
	;
ListaCmd: ListaCmd Comando
	| Comando
	;
Comando: CmdSe
	| CmdEnquanto
	| CmdAtrib
	| CmdEscrita
	| CmdLeitura
	| ChamadaFuncao
	| Retorno
	;
Retorno: TRET Expr TPVIR
	;
CmdSe: TIF TAPAR ExpressaoLogica TFPAR BLoco CloseIf
	| TIF TAPAR ExpressaoLogica TFPAR BLoco CloseIf TELSE BLoco
	;
CloseIf: {gera_fim_if();}
	;
CmdEnquanto: TWHILE InitWhile TAPAR ExpressaoLogica TFPAR BLoco {gera_fim_while();gera_fim_if();}
	;
InitWhile: {gera_init_while();}
	;
CmdAtrib: TID TIGUAL Expr TPVIR {geraStore(posTabSim($1.id));}
	| TID TIGUAL TLITERAL TPVIR {geraStore(posTabSim($1.id));}
	| TID TIGUAL TID TAPAR ListaId TFPAR TPVIR {geraStore(posTabSim($1.id));}
	| TID TIGUAL TID TAPAR TFPAR TPVIR {geraStore(posTabSim($1.id));}
	;
CmdEscrita: TPRINT M TAPAR Expr TFPAR TPVIR{geraInvoke($4.tipo);}
	| TPRINT M TAPAR TLITERAL TFPAR TPVIR {geraldc($4.texto);}
	;
M: {gera_ini_print();};
CmdLeitura: TREAD TAPAR TID TFPAR TPVIR
	;
ChamadaFuncao: TID TAPAR ListaParametros TFPAR TPVIR
	| TID TAPAR TFPAR TPVIR
	;
ListaParametros: ListaParametros TVIR Expr
	| Expr
	;
Expr: Expr TADD Termo {geraAdd();} 
	| Expr TSUB Termo {geraSub();} 
	| Termo {$$.tipo = $1.tipo;}
	;
Termo: Termo TMUL Fator {geraMul();} 
	| Termo TDIV Fator {geraDiv();} 
	| Fator {$$.tipo = $1.tipo;}
	;
Fator: TNUM 
	| TAPAR Expr TFPAR 
	| TID {$$.tipo = tipo_sim($1.id); gerarLoad(posTabSim($1.id));}
	| TCONST {gerarConst($1.cconst);}
	;
ExpressaoRelacional: Expr TMENIGUAL Expr {if_icmp(le);}
	| Expr TMAIIGUAL Expr {if_icmp(ge);}
	| Expr TMAI Expr {if_icmp(gt);}
	| Expr TMEN Expr {if_icmp(lt);}
	| Expr TIG Expr {if_icmp(eq);}
	| Expr TDIF Expr {if_icmp(ne);}
	;
ExpressaoLogica: TNOT ExpressaoRelacional {}
	| ExpressaoRelacional TAND ExpressaoRelacional {}
	| ExpressaoRelacional TOR ExpressaoRelacional {}
	| ExpressaoRelacional
	;
%%
#include "lex.yy.c"

int yyerror (char *str){
	printf("%s - antes %s\n", str, yytext);
	return 0;
} 		 

int yywrap(){
	return 1;
}