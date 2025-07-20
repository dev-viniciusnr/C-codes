#include<stdio.h>

void func1(){	
	int i,y;
	int valor[50];
	scanf("%d", &y);
	for(i=0; i < y; i++){
		scanf("%d", &valor[i]);
	}

	int temp, temp2, atual;
	temp = 10000;
	temp2 = 0;	


	for(i = 0; i < y; i++){

		atual =valor[i] ;
		if(atual < temp){
			temp = atual;
		} 
		if(atual > temp2){
			temp2 = atual;	
		}


	}
	
	printf("maior valor: %d\n", temp2);
	printf("menor valor: %d\n", temp);


}

int main(){

	
	func1();
		
	
	return 0;

}
