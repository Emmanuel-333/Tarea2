#include <stdio.h>
int main ()
{
  int num1,num2;
  printf("Ingresar el primer numero entero: ");
  scanf("%d", &num1);
  printf("Ingresa el segundo numero entero: ");
  scanf("%d",&num2);

  if(num1==0||num2==0)
  {
    printf("La division entre cero no esta determinada");
  }
else if ( num1 % num2 ==0)
  {
  printf("%d es divisor de %d", num1, num2);
  }
else if ( num2 % num1 ==0)
  {
  printf("%d es divisor de %d", num2, num1);
  }
else [
      printf("Ninguno es divisor del otro");
      }
return 0;
}
