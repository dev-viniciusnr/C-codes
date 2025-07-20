#include <stdio.h>

int main(){
	
	int i, a, N, q, city, city1, city2, temp, citywalk, cidades[10], citycalc, teste, verdade = 0, distancia = 0;

	teste = 1;	
		
	q = 0;

	scanf("%d\n", &N);	

	int m1[N][N];

	for(i=1; i<=N;i++){
		for(a=1;a<=N; a++){
			scanf("%d", &m1[i][a]);
		}
	printf("\n");	
	}


	scanf("%d\n", &city1);
	scanf("%d\n", &city2);
	city1 += 1;
	city2 += 1;

	cidades[0] = city1;

	do{
	if(city2 == cidades[q]){
		break;	
	}
	temp = 1000;
		citycalc = cidades[q];
		for(i=1; i<=N; i++){
			
			for(a = 0; a <= q; a++){
				if(cidades[a] == i){
					verdade = 1;	
				}
			}				
			

			if(verdade == 0){
				citywalk = m1[citycalc][i];
				
				
				if(citywalk != 0){
					if(temp > citywalk){
						temp = citywalk;			
						city = i;
						
						
						}
					}
				}
			verdade = 0;
		}
	q++;	
	cidades[q] = city;	
	distancia += temp;
	} while(teste != 0);
	
	//printf("%d\n %d\n  %d\n   %d\n    %d\n", cidades[0], cidades[1], cidades[2], cidades[3], cidades[4]);

	city1 -= 1;
	city2 -= 1;
	
	printf("Menor distancia gulosa entre os nos %d e %d:: %d\n", city1, city2, distancia);
	printf("Caminho:: ");
	
	for(i = 0; i < q ; i++){
		cidades[i] -= 1;
		printf("%d->",cidades[i]);
	}
	printf("%d\n", city2);

	/*for(i=1; i<=N; i++){
		for(a=1; a<=N; a++){
			printf("%d ", m1[i][a]);
		}		
	printf("\n");	
	}*/
	

	

	return 0;
}
