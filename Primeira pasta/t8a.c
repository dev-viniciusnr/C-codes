#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	float i =  0.0000001;
	struct Ponto{
		float x;
		float y;
	}P1, P2;
	//printf("Digie as cordenadas do primeiro ponto\n");
	scanf("%f %f", &P1.x, &P1.y);
	//printf("Digie as cordenadas do segundo ponto\n");
	scanf("%f %f", &P2.x, &P2.y);
	float dist;
	dist = sqrt(pow(( P2.x - P1.x ),2) + pow(( P2.y - P1.y ),2) );
	//printf("%f\n", dist);
	if(dist < i){
		printf("os pontos sao iguais");
	}
	else {
		printf("os pontos nao sao iguais");
	}


return 0;
}
