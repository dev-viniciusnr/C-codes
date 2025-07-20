#include <stdio.h>
#include <string.h>
#include <math.h>


void somaImaginario (float zReal1, float zImaginario1, float wReal1, float wImaginario1)
{
   zReal1 = zReal1 + wReal1;
   zImaginario1 = zImaginario1 + wImaginario1;

  printf("%.0f + %.0fi", zReal1, zImaginario1);
}


void multImaginario (float zReal, float zImaginario, float wReal, float wImaginario)
{
   // (zReal + zImaginario) * (wReal + wImaginario)
   float zReal1, zImaginario1, wReal1, wImaginario1;

   
   zImaginario1 = (zReal * wImaginario) + (zImaginario * wReal);
   zReal1 = (zReal * wReal) - (zImaginario * wImaginario);

  printf("%.0f + %.0fi", zReal1, zImaginario1);
}



int main()
{

  char operacao;
  float zReal, zImaginario, wReal, wImaginario;

  scanf("%f %f %c %f %f", &zReal, &zImaginario, &operacao, &wReal, &wImaginario);

  if (operacao == '+')
  {
    somaImaginario(zReal, zImaginario, wReal, wImaginario);
  }
  else
  {
    multImaginario(zReal, zImaginario, wReal, wImaginario);
  }



return 0;
}

