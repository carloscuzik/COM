#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* #define iconst_1 1
#define iconst_2 2
#define iconst_3 3
#define iconst_4 4
#define iconst_5 5*/
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


#define STRING 1
#define INT 0




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
	int cconst;
}Atributo;

 typedef struct cod{
 	int label,inst,p1,p2;
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


void inicializa_lista(Lista **lista);
Lista *insere_lista(Lista *lista, Codigo info);









Lista_INT *inicializa_lista_INT(char info[]);
void insere_lista_INT(Lista_INT *lista, char info[]);


////////////////////////////////////////////////
void insereNaTabela(Lista_INT* listaid,int tipo);






void imprime_Tabela();
void imprime_comando(int opcao);