
#include <stdio.h>
#include <string.h>

int Quadrado(int a,int b){
	b = a*a*a;
	return b;
}

int main(){
	int vetA[10],vetB[10];
	for(int j=0;j<10;j++){
		scanf("%d",&vetA[j]);
	}
	for(int i=0;i<10;i++){
		vetB[i]=Quadrado(vetA[i],vetB[i]);
		printf("%d\n",vetB[i]);
	}
return 0;
}
