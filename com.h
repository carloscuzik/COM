#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define iadd 1
#define isub 2
#define idiv 3
#define imul 4
#define bipush 5
#define iconst_0 6
#define iconst_1 7
#define iconst_2 8
#define iconst_3 9
#define iconst_4 11
#define iconst_5 12
#define iload 13
#define istore 14
#define getStatic 15
#define invokevirtual_int 16
#define invokevirtual_str 17
#define ldc 18

#define STRING 1
#define INT 0

#define eq 19
#define ne 20
#define lt 21
#define le 22
#define gt 23
#define ge 24

#define fim_label 25
#define _goto 26


//LISTA DE INTSSSSSSSSSSS
typedef struct no_lista_int{
	struct no_lista_int* proximo;
	char info[128];
}No_lista_INT;

typedef struct $sss{
	No_lista_INT* topo;
}Lista_INT;

//declaraçãoaaaaaaaaa
typedef struct atributo{
	int tipo;
	Lista_INT *listaid;
	char id[128];
	char texto[300];
	int cconst;
}Atributo;

 typedef struct cod{
 	int label,inst,p1,p2;
 	char p3[200];
 }Codigo;

 typedef struct tabSim{
 	char id[128];
 	int tipo;
 	int pos;
 }TabSim;

//LISTAAAAAAAAAAAAAAAAA
typedef struct no_lista{
	struct no_lista* proximo;
	Codigo info;
}No_lista;

typedef struct ${
	No_lista* topo;
}Lista;

void geraAdd();
void geraSub();
void geraDiv();
void geraMul();
void gerarLoad(int pos);
void geraStore(int pos);
void gerarConst(int p1);
int posTabSim(char id_procurado[128]);
void gera_ini_print();
void geraInvoke();
void geraldc(char literal[]);
void inicializa_lista(Lista **lista);
Lista *insere_lista(Lista *lista, Codigo info);
Lista_INT *inicializa_lista_INT(char info[]);
void insere_lista_INT(Lista_INT *lista, char info[]);
void insereNaTabela(Lista_INT* listaid,int tipo);
void imprime_Tabela();
void imprime_comando(int opcao);
void if_icmp(int tipo);
void gera_fim_if();
void gera_fim_while();
void gera_init_while();