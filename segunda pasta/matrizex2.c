#include <stdio.h>
#define Lin 20
#define Col 20
int main()
{
	int Matriz[Lin][Col];
	int x, y, nLin, nCol;
	scanf("%d %d\n", &nLin, &nCol); 
	for(x = 0; x < nLin; x++){ //Linhas
		for(y = 0; y < nCol; y++){//colunas
			scanf("%d", &Matriz[x][y]);
	 	}
	}
	for(x = 0; x < nLin; x++){ //Linhas
		for(y = 0; y < nCol; y++){//colunas
			printf("%d ",Matriz[x][y]);
		}
		
	}
	printf("\n");
	
	
	
	
	
	
	return 0;
}
