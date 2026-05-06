#include <stdio.h>
int main ()
{
  cons float cambio = 11.96;
  float dolares, pesos;
  printf("Ingresar la cantidad en dolares: ");
  scanf("%f", &dolares);
  pesos = dolares*cambio;
  printf("Cantidad en pesos= %f", pesos);
  return 0;
}
  
