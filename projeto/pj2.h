#ifndef pj2_h
#define pj2_h
#endif
#include <stdio.h>

int cadastro(char usuario[100]){

	FILE *arqInput;
	arqInput = fopen ("usuarios.dat", "w+");

	fprintf(arqInput, "%s\n", usuario);
	
}

int mensagem(char usuario[100], char dest[100], char texto[100]){

	FILE *arqInput;
	arqInput = fopen ("%s.dat", dest, "w+");

	fprintf(arqInput, "%s\n", texto);
	
}


int lermen(char usuario[100]){

	FILE *arqInput;
	arqInput = fopen ("%s.dat", usuario, "r");

	char texto[100];

	for (i=0; i < 3; i ++){
		fprintf(arqInput, "%s\n", texto[i]);
		
	}
	
}


int grupo(char grupo[100]){

	FILE *arqInput;
	arqInput = fopen ("%s.dat", grupo, "w+");

	fprintf(arqInput, "%s\n", grupo);		
	
}

int addgrupo(char grupo[100], char usuario[100]){

	FILE *arqInput;
	arqInput = fopen ("%s.dat", grupo, "w+");

	fprintf(arqInput, "%s\n", usuario);		
	
}

int remgrupo(char grupo[100], char nome[100]){

	//remover usuario
	FILE *arqInput;
	arqInput = fopen ("%s.dat", grupo, "w+");

	fprintf(arqInput, "%s\n", usuario);		
	
}


