%{
#include <stdio.h>
#include <stdlib.h>
#include "com.h"
#define YYSTYPE Atributo
%}

%token TADD TMUL TSUB TDIV TAPAR TFPAR TMENIGUAL TMAIIGUAL TMEN TMAI TDIF TIG TAND TNUM TIF TWHILE TELSE
TPRINT TREAD TOR TNOT TACHAVES TIGUAL TFCHAVES TINT TSTRING TVOID TLITERAL TID TVIR TPVIR TRET TCONST TMAISIG TDO
%%

Programa: {gera_cabecalho();} ListaFuncoes {gera_main();} BlocoPrincipal {fecha_funcao();}
	| {gera_cabecalho();} {gera_main();} BlocoPrincipal {fecha_funcao();}
	;
ListaFuncoes: ListaFuncoes Funcao {insere_na_lista_de_funcoes($2.id,$2.tipo,$2.lista_de_par);}
	| Funcao {insere_na_lista_de_funcoes($1.id,$1.tipo,$1.lista_de_par);}
	;
Funcao: TipoRetorno TID TAPAR DeclParametros TFPAR {gera_cabecalho_func($1.tipo,$2.id,$4.lista_de_par);} BlocoPrincipal {zera_parametros(); fecha_funcao(); $$.lista_de_par = $4.lista_de_par; strcpy($$.id,$2.id);}
	| TipoRetorno TID TAPAR TFPAR {gera_cabecalho_func($1.tipo,$2.id,NULL);} BlocoPrincipal {zera_parametros(); fecha_funcao();}
	;
TipoRetorno: Tipo {$$.tipo = $1.tipo;}
	| TVOID {$$.tipo = 2;}
	;
DeclParametros: DeclParametros TVIR Parametro {$$.lista_de_par = insere_lista_parametros($1.lista_de_par,$3.tipo);}
	| Parametro {$$.lista_de_par = cria_lista_parametros($1.tipo);}
	;
Parametro: Tipo TID {insere_na_tabela_de_simbolos($1.tipo,$2.id);}
	;
BlocoPrincipal: TACHAVES Declaracoes ListaCmd TFCHAVES {imprime_Tabela();}
	| TACHAVES ListaCmd TFCHAVES {imprime_Tabela();}
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
	| CmdDo
	| CmdAtrib
	| CmdEscrita
	| CmdLeitura
	| ChamadaFuncao
	| Retorno
	;
Retorno: TRET Expr TPVIR
	;
CmdSe: TIF TAPAR ExpressaoLogica TFPAR K BLoco {corrigir($3.listav,$5.label); corrigir($3.listaf, novolabel());}
	| TIF TAPAR ExpressaoLogica TFPAR K BLoco Y TELSE K BLoco {corrigir($3.listav, $5.label); corrigir($3.listaf, $9.label); corrigir($7.listav, novolabel());} 
	;
CmdEnquanto: TWHILE K TAPAR ExpressaoLogica TFPAR K BLoco {corrigir($4.listav, $6.label);gerar_goto_l($2.label);corrigir($4.listaf,novolabel());}
	;
Y: {$$.listav = cria_lista(ultimo()); gerar_goto();}
	;
CmdDo: TDO K BLoco TWHILE TAPAR ExpressaoLogica TFPAR TPVIR {corrigir($6.listav, $2.label);corrigir($6.listaf,novolabel());}
	;
CmdAtrib: TID TIGUAL Expr TPVIR {geraStore(posTabSim($1.id));}
	| TID TMAISIG Expr TPVIR {gerarLoad(posTabSim($1.id));geraAdd();geraStore(posTabSim($1.id));}
	| TID TIGUAL TLITERAL TPVIR {gera_acost($3.texto);geraaStore(posTabSim($1.id));}//trocar aload por o sem 
	| TID TIGUAL TID TAPAR ListaId TFPAR TPVIR {geraStore(posTabSim($1.id));}
	| TID TIGUAL TID TAPAR TFPAR TPVIR {geraStore(posTabSim($1.id));}
	;
CmdEscrita: TPRINT M TAPAR Expr TFPAR TPVIR{geraInvoke($4.tipo);}
	| TPRINT M TAPAR TLITERAL TFPAR TPVIR {geraldc($4.texto);}
	;
M: {gera_ini_print();};
CmdLeitura: TREAD TAPAR TID TFPAR TPVIR
	;
ChamadaFuncao: TID TAPAR ListaParametros TFPAR TPVIR {chama_funcao($1.id,$3.lista_de_par);}
	| TID TAPAR TFPAR TPVIR {chama_funcao($1.id,NULL);}
	;
ListaParametros: ListaParametros TVIR Expr {$$.lista_de_par = insere_lista_parametros($1.lista_de_par,$3.tipo);}
	| Expr {$$.lista_de_par = cria_lista_parametros($1.tipo);}
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
	| TID {$$.tipo = tipo_sim($1.id); if($$.tipo==0){gerarLoad(posTabSim($1.id));}else{geraraLoad(posTabSim($1.id));}}
	| TCONST {gerarConst($1.cconst);}
	;
ExpressaoRelacional: Expr TMENIGUAL Expr  {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(le); gerar_goto();}
	| Expr TMAIIGUAL Expr  {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(ge); gerar_goto();}
	| Expr TMAI Expr  {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(gt); gerar_goto();}
	| Expr TMEN Expr {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(lt); gerar_goto();}
	| Expr TIG Expr  {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(eq); gerar_goto();}
	| Expr TDIF Expr {$$.listav = cria_lista(ultimo()); $$.listaf = cria_lista(ultimo()+1); if_icmp(ne); gerar_goto();}
	;
ExpressaoLogica: ExpressaoLogica TAND K ExpressaoRelacional {corrigir($1.listav,$3.label); $$.listaf = merge($1.listaf, $4.listaf); $$.listav = $4.listav;}
	| ExpressaoLogica TOR K ExpressaoRelacional {corrigir($1.listaf,$3.label); $$.listav = merge($1.listav, $4.listav); $$.listaf = $4.listaf;}
	| ExpressaoLogica2 {$$.listav = $1.listav; $$.listaf = $1.listaf;}
	;
ExpressaoLogica2: TNOT ExpressaoLogica2 {$$.listav = $2.listaf; $$.listaf = $2.listav;}
	| TAPAR ExpressaoLogica TFPAR {$$.listav = $2.listav; $$.listaf = $2.listaf;}
	| ExpressaoRelacional {$$.listav = $1.listav; $$.listaf = $1.listaf;}
	;
K: {$$.label = novolabel();};


%%
#include "lex.yy.c"

int yyerror (char *str){
	printf("%s - antes %s\n", str, yytext);
	return 0;
} 		 

int yywrap(){
	return 1;
}
