#include "com.h"

Lista *tabela;
int last_label = 0;//referece a label da tabela de labels e comando que no caso é uma lista
int java_label = 1;//referesse a label do java
//tabela c]de declarações
TabSim tabela_simbolos[100];
int pilha_label[100];
int pilha_while[100];
int indice_label = 0;
int indice_while = 0;
int ultima_pos_tab_sim = 0;

void geraAdd(){
	Codigo aux;
	aux.inst = iadd;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraSub(){
	Codigo aux;
	aux.inst = isub;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraDiv(){
	Codigo aux;
	aux.inst = idiv;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraMul(){
	Codigo aux;
	aux.inst = imul;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
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
	aux.label = last_label;
	last_label++;
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
int tipo_sim(char id_procurado[128]){
	int i;
	for(i=0;i<ultima_pos_tab_sim;i++){
		if(strcmp(tabela_simbolos[i].id,id_procurado)==0){
			return tabela_simbolos[i].tipo;
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
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraStore(int pos){
	Codigo aux;
	aux.inst = istore;
	aux.p1=pos;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void gera_ini_print(){
	Codigo aux;
	aux.inst = getStatic;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraInvoke(int tipo){
	Codigo aux;
	if(tipo == INTE){
		aux.inst = invokevirtual_int;
	}else{
		aux.inst = invokevirtual_str;
	}
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void geraldc(char literal[]){
	Codigo aux;
	aux.inst = ldc;
	aux.p1=-1;//na vdd deveria usar a variavel literal[]
	aux.p2=-1;
	strcpy(aux.p3,literal);
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);

	aux.inst = invokevirtual_str;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
int novolabel(){
	int new_label = java_label;
	java_label++;
	printf("criando novo label: %i\n",new_label);
	return new_label;
}
int ultimo(){
	return last_label;
}
void gerar_goto(){
	Codigo aux;
	aux.inst = _goto;
	aux.p1= -1;
	aux.p2= -1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}
void gerar_goto_l(int new_label){
	Codigo aux;
	aux.inst = _goto;
	aux.p1= -1;
	aux.p2= -1;
	aux.label = last_label;
	last_label++;
	
	char buffer[5];
	char buffer2[3];
	sprintf(buffer2, "%i", new_label);
	buffer[0] = 'L';
	buffer[1] = '\0';
	strcat(buffer,buffer2);
	strcpy(aux.p3,buffer);
	
	tabela = insere_lista(tabela,aux);
}
//Construção da parte de comparações
void if_icmp(int tipo){
	Codigo aux;
	aux.inst = tipo;
	aux.p1=-1;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;

	char buffer[5];
	char buffer2[3];
	sprintf(buffer2, "%i", java_label);
	buffer[0] = 'L';
	buffer[1] = '\0';
	strcat(buffer,buffer2);
	strcpy(aux.p3,buffer);

	//java_label++;

	tabela = insere_lista(tabela,aux);
}
/*
void gera_fim_label(int new_label){
	Codigo aux;
	aux.inst = fim_label;
	aux.p1= -1;
	aux.p2= -1;
	aux.label = last_label;
	last_label++;

	char buffer[5];
	char buffer2[3];
	sprintf(buffer2, "%i", new_label);
	buffer[0] = 'L';
	buffer[1] = '\0';
	strcat(buffer,buffer2);
	strcpy(aux.p3,buffer);

	tabela = insere_lista(tabela,aux);
}*/

int label_java_atual(){
	return java_label;
}

void insereNaTabela(Lista_INT* listaid,int tipo){
	if(listaid == NULL){
		printf("nao deu certo\n");
		return;
	}
	No_lista_INT *aux = listaid->topo;
	while(aux!=NULL){
		tabela_simbolos[ultima_pos_tab_sim].pos = ultima_pos_tab_sim+1;
		tabela_simbolos[ultima_pos_tab_sim].tipo = tipo;
		strcpy (tabela_simbolos[ultima_pos_tab_sim].id,aux->info);
		ultima_pos_tab_sim++;
		aux = aux->proximo;
	}
}

//LISTAAAAAAAAAAAAA
void inicializa_lista(Lista **lista){
	(*lista) = (Lista*) malloc(sizeof(Lista));
	if((*lista) == NULL){
		printf("deu errado :(  ):\n");
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
//OTRAAAAAAA    LISTAAAAAAAAAAAAA
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

//Terceira listaaaaaaaaaa
int* cria_lista(int elemento){
	int* lista = (int*) malloc(sizeof(int)*20);
	int i;
	printf("inserindo o numero %i na lista quando cria\n",elemento);
	lista[0] = elemento;
	for(i=1;i<20;i++){
		lista[i] = 0;
	}
	return lista;
}

int* insere_lista_especial(int* lista, int info){
	int i;
	printf("inserindo o numero %i na lista\n",info);
	for(i=0;i<20;i++){
		if(lista[i]==0){
			lista[i] = info;
			break;
		}
	}
	return lista;
}

int *merge(int* lista1,int* lista2){
	int i,j=0;
	for(i=0;i<20;i++){
		if(lista1[i]==0){
			if(lista2[j]==0){
				return lista1;
			}else{
				printf("merge de %i \n", lista2[j]);
				lista1[i] = lista2[j];
				j++;
			}
		}
	}
	return lista1;
}
void corrigir(int *lista,int new_label){

	int i,j;
	for(j=0;j<20;j++){
		if(lista[j]==0){
			break;
		}
		No_lista* aux_comandos = tabela->topo;
		for(i=0;i<lista[j];i++){
			aux_comandos = aux_comandos->proximo;
		}
		char buffer[5];
		char buffer2[3];
		sprintf(buffer2, "%i", new_label);
		buffer[0] = 'L';
		buffer[1] = '\0';
		strcat(buffer,buffer2);
		strcpy(aux_comandos->info.p3,buffer);
		printf("coloca %s no %i\n",buffer, lista[j]);
	}
}

void imprime_Tabela(){
	No_lista* aux;
	if(tabela==NULL){
		printf("ta vazio por algum motivo\n");
	}else{
		aux = tabela->topo;
		system("clear");
		printf("---------------------------------------------------------\n");
		printf(".class public Alo\n");
		printf(".super java/lang/Object\n\n");
		printf(".method public <init>()V\n");
		printf("  aload_0\n");
		printf("  invokenonvirtual java/lang/Object/<init>()V\n");
		printf("  return\n");
		printf(".end method\n\n");
		printf(".method public static main([Ljava/lang/String;)V\n");
		printf("  .limit stack 4\n");
		printf("  .limit locals 10\n\n");
		while(aux!=NULL){
			if(aux->info.p3[0]=='L' && aux->info.inst!=_goto && aux->info.inst<19 && aux->info.inst>24){
				printf(" %s:\n",aux->info.p3);
			}
			//printf("%i:  ", aux->info.label);
			imprime_comando(aux->info.inst);
			if(aux->info.inst<18){
				if(aux->info.p1!=-1){
					printf("%i\n",aux->info.p1);
				}
				if(aux->info.p2!=-1){
					printf("%i\n",aux->info.p2);
				}
			}else{
				printf("%s",aux->info.p3);
				if(aux->info.inst==25){
					printf(":");
				}
				printf("\n");
			}
			aux = aux->proximo;
		}
		printf("  return\n");
		printf(".end method\n");
		printf("---------------------------------------------------------\n");
	}
}

void imprime_comando(int opcao){
	switch(opcao){
		case iadd:
			printf("  iadd\n");
			break;
		case isub:
			printf("  isub\n");
			break;
		case idiv:
			printf("  idiv\n");
			break;
		case imul:
			printf("  imul\n");
			break;
		case bipush:
			printf("  bipush ");
			break;
		case iconst_0:
			printf("  iconst_0\n");
			break;
		case iconst_1:
			printf("  iconst_1\n");
			break;
		case iconst_2:
			printf("  iconst_2\n");
			break;
		case iconst_3:
			printf("  iconst_3\n");
			break;	
		case iconst_4:
			printf("  iconst_4\n");
			break;
		case iconst_5:
			printf("  iconst_5\n");
			break;
		case iload:
			printf("  iload_");
			break;
		case istore:
			printf("  istore_");
			break;
		case getStatic:
			printf("  getstatic java/lang/System/out Ljava/io/PrintStream;\n");
			break;
		case invokevirtual_int:
			printf("  invokevirtual java/io/PrintStream/println(I)V\n");
			break;
		case invokevirtual_str:
			printf("  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");
			break;
		case ldc:
			printf("  ldc ");
			break;
		case eq:
			printf("  if_icmpne ");
			break;
		case ne:
			printf("  if_icmpeq ");
			break;
		case lt:
			printf("  if_icmpge ");
			break;
		case le:
			printf("  if_icmpgt ");
			break;
		case gt:
			printf("  if_icmple ");
			break;
		case ge:
			printf("  if_icmplt ");
			break;
		case fim_label:
			printf(" ");
			break;
		case _goto:
			printf("  goto ");
			break;
	}
}