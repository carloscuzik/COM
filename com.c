#include "com.h"

Lista *tabela;

//tabela c]de declarações
TabSim tabela_simbolos[100];
int ultima_pos_tab_sim = 0;

void geraAdd(){
	Codigo aux;
	aux.inst = iadd;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = -1;
 	
	tabela = insere_lista(tabela,aux);
}

void geraSub(){
	Codigo aux;
	aux.inst = isub;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = -1;

	tabela = insere_lista(tabela,aux);
}

void geraDiv(){
	Codigo aux;
	aux.inst = idiv;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = -1;
 	
	tabela = insere_lista(tabela,aux);
}

void geraMul(){
	Codigo aux;
	aux.inst = imul;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = -1;
 	
	tabela = insere_lista(tabela,aux);
}

void gerarConst(int p1){
	Codigo aux;
	if (p1 == 0){
		aux.inst = iconst_0;
	}
	if (p1 == 1){
		aux.inst = iconst_1;
	}
	if (p1 == 2){
		aux.inst = iconst_2;
	}
	if (p1 == 3){
		aux.inst = iconst_3;
	}
	if (p1 == 4){
		aux.inst = iconst_4;
	}
	if (p1 == 5){
		aux.inst = iconst_5;
	}
	aux.p1=-1;
	if (p1 > 5){
		aux.inst = bipush;
		aux.p1=p1;
	}
	aux.p2=-1;
	aux.label = -1;

	tabela = insere_lista(tabela,aux);
}

int posTabSim(char id_procurado[128]){
	int i;
	for(i=0;i<ultima_pos_tab_sim;i++){
		if(strcmp(tabela_simbolos[i].id,id_procurado)==0){
			return tabela_simbolos[i].pos;
		}
	}
	printf("id não encontrado %s\n",id_procurado);
	return -1;
}

void gerarLoad(int pos){
	Codigo aux;
	aux.inst = iload;
	aux.p1=pos;
	aux.p2=-1;
	aux.label = -1;

	tabela = insere_lista(tabela,aux);
}
void geraStore(int pos){
	Codigo aux;
	aux.inst = istore;
	aux.p1=pos;
	aux.p2=-1;
	aux.label = -1;

	tabela = insere_lista(tabela,aux);
}
void gera_ini_print(){}
void geraInvoqke(){}
void geraldc(char literal[]){}
//LISTAAAAAAAAAAAAA

void inicializa_lista(Lista **lista){
	(*lista) = (Lista*) malloc(sizeof(Lista));
	if((*lista) == NULL){
		printf("deu errado :(     ):\n");
	}else{
		(*lista)->topo = NULL;
	}
}
Lista * insere_lista(Lista *lista, Codigo info){
	if(lista == NULL){
		inicializa_lista(&lista);
	}
	No_lista* aux;
	if(lista->topo==NULL){
		lista->topo = (No_lista*) malloc(sizeof(No_lista));
		lista->topo->info = info;
	}else{
		aux = lista->topo;
		while(aux->proximo!=NULL){
			aux = aux->proximo;
		}
		aux->proximo = (No_lista*) malloc(sizeof(No_lista));
		aux->proximo->info = info;
		aux->proximo->proximo = NULL;
	}
	return lista;
}



//LISTAAAAAAAAAAAAA

Lista_INT *inicializa_lista_INT(char id[]){
	Lista_INT *lista;
	lista = (Lista_INT*) malloc(sizeof(Lista_INT));
	if(lista == NULL){
		printf("deu errado :(     ):\n");
	}else{
		lista->topo = NULL;
	}
	insere_lista_INT(lista,id);
	return lista;
}
void insere_lista_INT(Lista_INT *lista, char info[]){
	if(lista == NULL){
		printf("deu muita merda\n");
	}
	No_lista_INT* aux;
	if(lista->topo==NULL){
		lista->topo = (No_lista_INT*) malloc(sizeof(No_lista_INT));
		strcpy(lista->topo->info, info);
	}else{
		aux = lista->topo;
		while(aux->proximo!=NULL){
			aux = aux->proximo;
		}
		aux->proximo = (No_lista_INT*) malloc(sizeof(No_lista_INT));
		strcpy(aux->proximo->info, info);
		aux->proximo->proximo = NULL;
	}
}




void insereNaTabela(Lista_INT* listaid,int tipo){
	if(listaid == NULL){
		printf("nao deu certo\n");
		return;
	}
	No_lista_INT *aux = listaid->topo;
	int i;
	while(aux!=NULL){
		tabela_simbolos[ultima_pos_tab_sim].pos = ultima_pos_tab_sim+1;
		tabela_simbolos[ultima_pos_tab_sim].tipo = tipo;
		strcpy (tabela_simbolos[ultima_pos_tab_sim].id,aux->info);
		ultima_pos_tab_sim++;
		aux = aux->proximo;
	}
}



void imprime_Tabela(){
	No_lista* aux;
	if(tabela==NULL){
		printf("ta vazio por algum motivo\n");
	}else{
		aux = tabela->topo;
		system("clear");
		printf("IMPRESSÂOOOOOOOOOOOOOOOOOOOOOOO POOOOORRRRRRRRRAAAAAAAAAAAAAAAAAAAAA\n");
		while(aux!=NULL){
				imprime_comando(aux->info.inst);
				if(aux->info.p1!=-1){
					printf("%i\n",aux->info.p1);
				}
				if(aux->info.p2!=-1){
					printf("%i\n",aux->info.p2);
				}
			aux = aux->proximo;
		}
	}
}

void imprime_comando(int opcao){
	switch(opcao){
		case 1:
			printf(".iadd\n");
			break;
			
		case 2:
			printf(".isub\n");
			break;
			
		case 3:
			printf(".idiv\n");
			break;
			
		case 4:
			printf(".imul\n");
			break;
			
		case 5:
			printf(".bipush\n");
			break;
			
		case 6:
			printf(".iconst_0\n");
			break;
			
		case 7:
			printf(".iconst_1\n");
			break;
			
		case 8:
			printf(".iconst_2\n");
			break;
			
		case 9:
			printf(".iconst_3\n");
			break;
			
		case 10:
			printf(".\n");
			break;
			
		case 11:
			printf(".iconst_4\n");
			break;

		case 12:
			printf(".iconst_5\n");
			break;

		case 13:
			printf(".iload ");
			break;

		case 14:
			printf(".istore ");
			break;
			
	}
}