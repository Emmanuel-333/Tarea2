#include<stdio.h>
int main ()
{
  float monto,tasa, final;
  printf("Ingresa el monto inicial: ");
  scanf("%f", &monto);

  printf("Ingres la tasa de interes mensual: ");
  scanf("%f", &tasa);
  final= monto*(1 + tasa/100);
  printf("Monto final al mes: %f", final);
  return 0;
}
  
  
  
