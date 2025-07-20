#include <stdio.h>
int main()
{

  struct corpo  
  {
    float altura;
    float peso;
    char nome[20];
  } pessoa;
  
  scanf("%f", &pessoa.altura);
  scanf("%f", &pessoa.peso);
  scanf("%s", &pessoa.nome);

  printf("%0.3f\n", (pessoa.peso / (pessoa.altura * pessoa.altura)));



return 0;
}
