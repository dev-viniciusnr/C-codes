#include<stdio.h>

int main(){
	int i, x, acao;

	struct criptografia {
		char nome[100];
		char departamento[100];
		char mensagem[100];
		int id;
	} 

	for(i=1, i<0, i++){
		x = 0;
		printf("****MENU CRIPTOGRAFIA****\n");
		printf("1: Criptografar mensagem\n");
		printf("2: Encontrar padroes\n");
		printf("3: Descriptografar mensagem\n");
		printf("4: Visualizar todas as mensagens\n");
		printf("0: Sair!\n");
		scanf("%d\n", &acao);

		if(acao == 1){
			printf("acao1");
			x = x+1;
		}
		if(acao == 2){
			printf("acao2");
			x = x+1;
		}
		if(acao == 3){
			printf("acao3");
			x = x+1;
		}
		if(acao == 4){
			printf("acao4");
			x = x+1;
		}
		if(acao == 0){
			printf("sair");
			break;
		}

		if(x < 1){
			printf("****Opcao Invalida, tentar novamente****\n");
		}

	}



	return 0;
}