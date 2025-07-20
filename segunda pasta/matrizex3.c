#include <stdio.h>

int main() {
  
  int numLim1, numCol1, numLim2, numCol2, i, j, k, m1[50][50], m2[50][50], m3[50][50];
    
  scanf("%d %d", &numLim1, &numCol1);
  scanf("%d %d", &numLim2, &numCol2);

  if (numCol1 == numLim2)
  {
    for (i=0; i<numLim1; i++)
    {
      for(j=0; j<numCol1; j++)
      {
        scanf("%d", &m1[i][j]);
      }

    }

    for (i=0; i<numLim2; i++) 
    {
      for (j=0; j<numCol2; j++)
      {
        scanf("%d", &m2[i][j]); 
      }

    }

    for (i=0;i<numLim1; i++)
    {
      for (j=0; j<numLim1; j++)
      {
        for (k=0; k<numCol1; k++)
        {
          m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]); 
        }

      }
    
    }

    for (i=0; i<numLim1; i++)
    {
      for (j=0; j<numCol2; j++)
      {
        printf("%d ", m3[i][j]);

      }

      printf("\n");

    }

    printf("\n");

  }

  else 
  {
      printf("As dimensoes das duas matrizes nao permitem a multiplicacao\n");
  }
  
  return(0);  

}
