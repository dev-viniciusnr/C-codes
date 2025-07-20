#include <stdio.h>
#include <math.h>

float soma (float a, float b);
float sub (float a, float b);
float divi (float a, float b);
float mult (float a, float b);
float pote (float a, float b);
int main(){
	float nota1,nota2;
	char Ope;
	scanf("%f%c%f",&nota1,&Ope,&nota2);
	if(Ope == '+')	
		printf("%.3f\n",soma(nota1,nota2));
	if(Ope == '-')
		printf("%.3f\n",sub(nota1,nota2));
	if(Ope == '/')
		printf("%.3f\n",divi(nota1,nota2));
	if(Ope == '^')
		printf("%.3f\n",pote(nota1,nota2));
	if(Ope == '*')
		printf("%.3f\n",mult(nota1,nota2));
return 0;
}
float soma (float a, float b){
	float res = a+b;
	return res;
}
float sub (float a, float b){
	float res = a-b;
	return res;
}
float divi (float a, float b){
	float res = a/b;
	return res;
}
float mult (float a, float b){
	float res = a*b;
	return res;
}
float pote (float a, float b){
	float res = pow(a,b);
	return res;
}
