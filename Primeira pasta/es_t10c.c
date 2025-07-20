#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	typedef struct Aluno {
		char nome[102];
		int RA;
		float P1,P2;	
	}Alunos;
	int n=0;
	scanf("%d",&n);
	Alunos* Sala = (Alunos*) malloc(n*sizeof(Alunos));
	
	for(int a=0;a<n;a++){
		fgets(Sala[a].nome,102,stdin);
		fgets(Sala[a].nome,102,stdin);
		scanf("%d",&Sala[a].RA);
		scanf("%f",&Sala[a].P1);
		scanf("%f",&Sala[a].P2);
		char aux[102];
		strcpy(aux,Sala[a].nome);
		aux[strlen(aux)-1] = '\0';
		strcpy(Sala[a].nome,aux);
	}
	for(int a=0;a<n;a++){
		float media;
		media = (Sala[a].P1+Sala[a].P2)/2;
		printf("%d\t%s\t%.2f\n",Sala[a].RA,Sala[a].nome,media);
		//printf("%d\n",a);
	}
return 0;
}
