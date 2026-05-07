#include <stdio.h>
int main ()
{
  float sueldo, aumento;
  printf("ingrese su sueldo: ");
  scanf("%f", &sueldo);

  if(sueldo<1000)
  {
    aumento = sueldo*15/100;
  }
    else 
      {
        aumento= sueldo*12/100;
      }
  sueldo = sueldo + aumento;
printf("Su sueldo final es de: %f", sueldo);
return 0;
}
