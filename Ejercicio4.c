#include<stdio.h>
int main ()
{
  float monto, total;
  printf("ingrese el monto de la compra: ");
  scanf("%f", &monto);
  if ( monto > 2500)
    {
      total = monto - (monto *8/100);
    }
      else
        {
          total = monto;
        }
printf("El pago final es: %f", total);
return 0;
}

