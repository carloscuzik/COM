#include <stdio.h>
#include "com.h"

extern FILE *yyin;

int main(){
	FILE * in;
	Lista * tabela;
	printf("Entre com o nome do arquivo:\n");
	//char nome_arquivo[30];
	//scanf("%s",nome_arquivo);
	in = fopen("exemplos/exemplo1.txt","r");
	if (in!=NULL){
		yyin = in;
		yyparse();
	}else{
		printf("Arquivo nao existe\n");
	}
	fclose(in);
	return 0;
}