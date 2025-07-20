#include <stdio.h>
#include <math.h>

float media(float n1, float n2, char x);;
int main(){
	float nota1,nota2;
	char Letra;
	scanf("%c",&Letra);
	scanf("%f %f",&nota1,&nota2);
	
	printf("%.3f\n",media(nota1,nota2,Letra));

return 0;
}
float media(float n1, float n2, char x){
	float media;
	if(x == 'A'){
		media = (n1+n2)/2;
	}else if(x == 'B'){
			media = sqrt(n1*n2);
		}
	return media;
}
