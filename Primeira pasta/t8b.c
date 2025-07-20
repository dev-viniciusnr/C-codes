#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	struct ponto{
		int x;
		int y;
	};	

	struct Retangle
        {
		struct ponto inferior_esquerdo;
		struct ponto superior_direito;         
        } Ret1, Ret2;

        float dist1, dist2; 


        // Primeiro retângulo
	scanf("%d %d", &Ret1.inferior_esquerdo.x, &Ret1.inferior_esquerdo.y);
	scanf("%d %d", &Ret1.superior_direito.x, &Ret1.superior_direito.y);

	// Segundo retângulo
	scanf("%d %d", &Ret2.inferior_esquerdo.x, &Ret2.inferior_esquerdo.y);
	scanf("%d %d", &Ret2.superior_direito.x, &Ret2.superior_direito.y);

      	dist1 = sqrt(pow(( Ret1.inferior_esquerdo.x - Ret1.superior_direito.x ),2) +
                pow(( Ret1.superior_direito.y - Ret1.inferior_esquerdo.y ),2) );

        dist2 = sqrt(pow(( Ret2.inferior_esquerdo.x - Ret2.superior_direito.x ),2) +
                pow(( Ret2.superior_direito.y - Ret2.inferior_esquerdo.y ),2) );

        if (dist2 <= dist1)
        {
        	printf("o segundo retangulo esta contido no primeiro\n");        
        }
        else
        {
        	printf("o segundo retangulo nao esta contido no primeiro\n");
        }

        


return 0;
}
