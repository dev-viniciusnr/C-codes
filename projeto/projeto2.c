#include <pj2.h>
#include <stdio.h>
#define val 30

int main(){

	char usuario[100];
	int valor;

	printf("digite o seu usuario:\n");
	fgets(usuario, val, stdin); 	
	cadastro(usuario);
	
	printf("1-enviar mensagem\n");
	printf("2-receber mensagem\n");
	printf("3-anexar arquivos\n");
	printf("4-criar grupo\n");
	printf("5-adicionar membros\n");
	printf("6-remover membros\n");

	scanf("%d", &valor);
	
	  switch ( valor )
	  {
	    case 1 :
	    printf ("caso1\n");
	    break;
	    
	    case 2 :
	    printf ("caso2\n");
	    break;
	    
	    case 3 :
	    printf ("caso3\n");
	    break;
	    
	    case 4 :
	    printf ("caso4\n");
	    break;
	    
	    case 5 :
	    printf ("caso5\n");
	    break;
	    
	    case 6 :
	    printf ("caso6\n");
	    break;
	    
	    default :
	    printf ("O valor digitado e invalido\n");
	  }


	return 0;

}



