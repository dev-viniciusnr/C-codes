#include<stdio.h>

float volume_esfera(float raio){
	float v;
	float r = raio;
	v = 4*3.14159*r*r*r/3;
	//printf("%f\n", v);
	return v;
}
int main(){
	
	float raio;
	scanf("%f", &raio);
	float resultado ;
	resultado = volume_esfera(raio);	
	printf("%.2f\n", resultado);
	
	return 0;

}
