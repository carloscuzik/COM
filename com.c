#include "com.h"

Lista *tabela;
int last_label = 0;//referece a label da tabela de labels e comando que no caso é uma lista
int java_label = 1;//referesse a label do java
//tabela de declarações
TabSim tabela_simbolos[100];
int ultima_pos_tab_sim = 0;

Lista_funcao lista_de_funcoes[100];
int ultima_posicao_da_lista_de_funcoes = 0;

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

void gera_acost(char literal[]){
	Codigo aux;
	aux.inst = ldc;
	aux.p1=-1;
	aux.p2=-1;
	strcpy(aux.p3,literal);
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}

int posTabSim(char id_procurado[128]){
	int i;
	for(i=0;i<ultima_pos_tab_sim;i++){
		//printf("%s - %s -- %i\n",tabela_simbolos[i].id,id_procurado,strcmp(tabela_simbolos[i].id,id_procurado));
		if(strcmp(tabela_simbolos[i].id,id_procurado)==0){
			//printf("%i\n",tabela_simbolos[i].pos);
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

void geraraLoad(int pos){
	Codigo aux;
	aux.inst = aload;
	aux.p1=pos;
	aux.p2=-1;
	aux.label = last_label;
	last_label++;
	tabela = insere_lista(tabela,aux);
}

void geraaStore(int pos){
	Codigo aux;
	aux.inst = astore;
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
	aux.p1=-1;
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
	//printf("criando novo label: %i\n",new_label);

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

int label_java_atual(){
	return java_label;
}

void insereNaTabela(Lista_INT* listaid,int tipo){
	if(listaid == NULL){
		printf("Erro\n");
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
		printf("Erro\n");
	}else{
		(*lista)->topo = NULL;
	}
}

Lista * insere_lista(Lista *lista, Codigo info){
	if(lista == NULL){
		inicializa_lista(&lista);
	}
	//printf("codigo: %i\n",info.label);
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
		printf("Erro\n");
	}else{
		lista->topo = NULL;
	}
	insere_lista_INT(lista,id);
	return lista;
}

void insere_lista_INT(Lista_INT *lista, char info[]){
	if(lista == NULL){
		printf("Lista esta vazia\n");
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
	//printf("inserindo o numero %i na lista quando cria\n",elemento);
	lista[0] = elemento;
	for(i=1;i<20;i++){
		lista[i] = 0;
	}
	return lista;
}

int* insere_lista_especial(int* lista, int info){
	int i;
	//printf("inserindo o numero %i na lista\n",info);
	for(i=0;i<20;i++){
		if(lista[i]==0){
			lista[i] = info;
			break;
		}
	}
	return lista;
}

int* cria_lista_parametros(int elemento){
	int* lista = (int*) malloc(sizeof(int)*20);
	int i;
	lista[0] = elemento;
	for(i=1;i<20;i++){
		lista[i] = -1;
	}
	return lista;
}

int* insere_lista_parametros(int*lista, int elemento){
	int i;
	for(i=0;i<20;i++){
		if(lista[i]==-1){
			lista[i] = elemento;
			break;
		}
	}
	return lista;
}

void insere_na_tabela_de_simbolos(int tipo,char id[128]){
	tabela_simbolos[ultima_pos_tab_sim].tipo = tipo;
	tabela_simbolos[ultima_pos_tab_sim].pos = ultima_pos_tab_sim;
	strcpy(tabela_simbolos[ultima_pos_tab_sim].id,id);
	ultima_pos_tab_sim++;
}

void zera_parametros(){
	ultima_pos_tab_sim = 0;
	tabela = NULL;
	last_label = 0;
}

int retorna_indice(){
	return ultima_pos_tab_sim;
}

void insere_na_lista_de_funcoes(char id[128],int tipo_retorno,int* parametros){
	printf("Grava a String %s\n",id);
	strcpy(lista_de_funcoes[ultima_posicao_da_lista_de_funcoes].id,id);
	lista_de_funcoes[ultima_posicao_da_lista_de_funcoes].tipo_retorno = tipo_retorno;
	lista_de_funcoes[ultima_posicao_da_lista_de_funcoes].parametros = parametros;
	ultima_posicao_da_lista_de_funcoes++;
}

void chama_funcao(char id[128],int* parametros){
	int* parametros_reais = busca_parametros(id);
	int i;
	strcat(id,"(");
	if(parametros_reais == NULL && parametros !=NULL || parametros_reais != NULL && parametros == NULL){
		printf("Função não existe\n");
		exit(1);
	}
	int fim = 0;
	for(i=0;i<20;i++){
		if(parametros_reais[i]==-1){
			break;
		}else{
			fim++;
		}
	}
	for(i=0;i<20;i++){
		if(parametros_reais[i] == -1 && parametros[i] == -1){
			break;
		}
		if(parametros_reais[i] != parametros[fim-i-1]){
			printf("Parametros não validos\n");
			exit(1);
		}
		if(parametros[i]==0){
			if(i==0){
				strcat(id,"I");
			}else{
				strcat(id,",I");
			}
		}else{
			if(i==0){
				strcat(id,"Ljava/lang/String");
			}else{
				strcat(id,",Ljava/lang/String");
			}
		}
	}
	Codigo aux;
	aux.inst = func;
	aux.label = last_label;
	char buffer[200];
	strcat(buffer,"invokevirtual ");
	strcat(buffer,id);
	int tipo = tipo_fun(id);
	if(tipo==2){
		strcat(buffer,";)V");
	}else if(tipo == 0){
		strcat(buffer,";)I");
	}else{
		strcat(buffer,";)Ljava/lang/String");
	}
	strcpy(aux.p3,buffer);
	last_label++;
	tabela = insere_lista(tabela,aux);
}

int tipo_fun(char id[128]){
	int i;
	for(i=0;i<ultima_posicao_da_lista_de_funcoes;i++){
		if(strcmp(lista_de_funcoes[i].id,id)==0){
			return lista_de_funcoes[i].tipo_retorno;
		}
	}
	return -1;
}

int* busca_parametros(char id[128]){
	int i;
	for(i=0;i<ultima_posicao_da_lista_de_funcoes;i++){
		///printf("%s - %s\n",lista_de_funcoes[i].id,id);
		if(strcmp(lista_de_funcoes[i].id,id)==0){
			return lista_de_funcoes[i].parametros;
		}
	}
	return NULL;
}

int *merge(int* lista1,int* lista2){
	int i,j=0;
	for(i=0;i<20;i++){
		if(lista1[i]==0){
			if(lista2[j]==0){
				return lista1;
			}else{
				//printf("merge de %i \n", lista2[j]);
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
		//printf("coloca %s no %i\n",buffer, lista[j]);
	}
}

void gera_cabecalho(){
	FILE *out;
	out = fopen("saida.j","w");
	system("clear");
	printf(".class public Main\n");
	fprintf(out,".class public Main\n");
	printf(".super java/lang/Object\n\n");
	fprintf(out,".super java/lang/Object\n\n");
	printf(".method public <init>()V\n");
	fprintf(out,".method public <init>()V\n");
	printf("  aload_0\n");
	fprintf(out,"  aload_0\n");
	printf("  invokenonvirtual java/lang/Object/<init>()V\n");
	fprintf(out,"  invokenonvirtual java/lang/Object/<init>()V\n");
	printf("  return\n");
	fprintf(out,"  return\n");
	printf(".end method\n\n");
	fprintf(out,".end method\n\n");
	fclose(out);
}

void gera_main(){
	FILE *out;
	out = fopen("saida.j","a");
	printf(".method public static main(Ljava/lang/String;)V\n");
	fprintf(out,".method public static main(Ljava/lang/String;)V\n");
	printf("  .limit stack 4\n");
	fprintf(out,"  .limit stack 4\n");
	printf("  .limit locals 10\n\n");
	fprintf(out,"  .limit locals 10\n\n");
	fclose(out);
}

void fecha_funcao(){
	FILE *out;
	out = fopen("saida.j","a");
	printf("  return\n");
	fprintf(out,"  return\n");
	printf(".end method\n\n");
	fprintf(out,".end method\n\n");
	fclose(out);
}

void gera_cabecalho_func(int tipo,char id[128],int* lista){
	FILE *out;
	out = fopen("saida.j","a");
	printf(".method public static %s(",id);
	fprintf(out,".method public static %s(",id);
	if(lista!=NULL){
		int i;
		for(i=0;i<20;i++){
			if(lista[i] == -1){
				break;
			}else{
				if(lista[i]==1){
					if(i==0){
						printf("Ljava/lang/String");
						fprintf(out,"Ljava/lang/String");
					}else{
						printf(",Ljava/lang/String");
						fprintf(out,",Ljava/lang/String");
					}
				}else{
					if(i==0){
						printf("I");
						fprintf(out,"I");
					}else{
						printf(",I");
						fprintf(out,",I");
					}
				}
			}
		}
		printf(";)");
		fprintf(out,";)");
	}else{
		printf("V;)");
		fprintf(out,"V;)");
	}
	if(tipo == 0){
		printf("I\n");
		fprintf(out,"I\n");
	}else if(tipo == 1){
		printf("Ljava/lang/String\n");
		fprintf(out,"Ljava/lang/String\n");
	}else{
		printf("V\n");
		fprintf(out,"V\n");
	}
	printf("  .limit stack 4\n");
	fprintf(out,"  .limit stack 4\n");
	printf("  .limit locals 10\n\n");
	fprintf(out,"  .limit locals 10\n\n");
	fclose(out);
}

void imprime_Tabela(){
	FILE *out;
	out = fopen("saida.j","a");
	No_lista* aux;
	if(tabela==NULL){
		printf("ta vazio por algum motivo\n");
	}else{
		aux = tabela->topo;
		
		while(aux!=NULL){
			/*if(aux->info.inst == 27){
				printf("%s\n", aux->info.p3);
				fprintf(out,"%s\n", aux->info.p3);
			}*/
			if(aux->info.p3[0]=='L' && aux->info.inst!=_goto && aux->info.inst<19 && aux->info.inst>24){
				printf(" %s:\n",aux->info.p3);
				fprintf(out," %s:\n",aux->info.p3);
			}
			//printf("%i:  ", aux->info.label);
			imprime_comandos(aux->info.inst, out);
			if(aux->info.inst<40){
				if(aux->info.inst<18){
					if(aux->info.p1!=-1){
						printf("%i\n",aux->info.p1);
						fprintf(out,"%i\n",aux->info.p1);
					}
					if(aux->info.p2!=-1){
						printf("%i\n",aux->info.p2);
						fprintf(out,"%i\n",aux->info.p2);
					}
				}else if(aux->info.inst>=18){
					printf("%s",aux->info.p3);
					fprintf(out,"%s",aux->info.p3);
					if(aux->info.inst==25){
						printf(":");
						fprintf(out,":");
					}
					printf("\n");
					fprintf(out,"\n");
				}else{
					
				}
			}else{
				printf("%i\n",aux->info.p1);
				fprintf(out,"%i\n",aux->info.p1);
			}
			aux = aux->proximo;
		}
		fclose(out);
		//printf("  return\n");
		//fprintf(out,"  return\n");
		//printf(".end method\n");
		//fprintf(out,".end method\n");
		//printf("---------------------------------------------------------\n");
	}
}

void imprime_comandos(int opcao, FILE *out){
	switch(opcao){
		case iadd:
			printf("  iadd\n");
			fprintf(out,"  iadd\n");
			break;
		case isub:
			printf("  isub\n");
			fprintf(out,"  isub\n");
			break;
		case idiv:
			printf("  idiv\n");
			fprintf(out,"  idiv\n");
			break;
		case imul:
			printf("  imul\n");
			fprintf(out,"  imul\n");
			break;
		case bipush:
			printf("  bipush ");
			fprintf(out,"  bipush ");
			break;
		case iconst_0:
			printf("  iconst_0\n");
			fprintf(out,"  iconst_0\n");
			break;
		case iconst_1:
			printf("  iconst_1\n");
			fprintf(out,"  iconst_1\n");
			break;
		case iconst_2:
			printf("  iconst_2\n");
			fprintf(out,"  iconst_2\n");
			break;
		case iconst_3:
			printf("  iconst_3\n");
			fprintf(out,"  iconst_3\n");
			break;	
		case iconst_4:
			printf("  iconst_4\n");
			fprintf(out,"  iconst_4\n");
			break;
		case iconst_5:
			printf("  iconst_5\n");
			fprintf(out,"  iconst_5\n");
			break;
		case iload:
			printf("  iload_");
			fprintf(out,"  iload_");
			break;
		case istore:
			printf("  istore_");
			fprintf(out,"  istore_");
			break;
		case astore:
			printf("  astore_");
			fprintf(out,"  astore_");
			break;
		case getStatic:
			printf("  getstatic java/lang/System/out Ljava/io/PrintStream;\n");
			fprintf(out,"  getstatic java/lang/System/out Ljava/io/PrintStream;\n");
			break;
		case invokevirtual_int:
			printf("  invokevirtual java/io/PrintStream/println(I)V\n");
			fprintf(out,"  invokevirtual java/io/PrintStream/println(I)V\n");
			break;
		case invokevirtual_str:
			printf("  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");
			fprintf(out,"  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");
			break;
		case ldc:
			printf("  ldc ");
			fprintf(out,"  ldc ");
			break;
		case eq:
			printf("  if_icmpeq ");
			fprintf(out,"  if_icmpeq ");
			break;
		case ne:
			printf("  if_icmpne ");
			fprintf(out,"  if_icmpne ");
			break;
		case lt:
			printf("  if_icmplt ");
			fprintf(out,"  if_icmplt ");
			break;
		case le:
			printf("  if_icmple ");
			fprintf(out,"  if_icmple ");
			break;
		case gt:
			printf("  if_icmpgt ");
			fprintf(out,"  if_icmpgt ");
			break;
		case ge:
			printf("  if_icmpge ");
			fprintf(out,"  if_icmpge ");
			break;
		case fim_label:
			printf(" ");
			fprintf(out," ");
			break;
		case _goto:
			printf("  goto ");
			fprintf(out,"  goto ");
			break;
		case aload:
			printf("  aload_");
			fprintf(out,"  aload_");
			break;
	}
}
