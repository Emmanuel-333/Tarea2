#include <stdio.h>
int main ()
{
  int num, i;
  int pos=0,neg=0,nulo=0;
  for(i=0;i<=100;i++)
    {
      printf("%d.Ingrese el numero: ", i);
        scanf("%d", &num);
        if(num>0) pos++;
          else if(num<0) neg++;
          else nulo++;
    }
printf("Positivos: %d\n Negativos: %d\n Nulos: %d\n", pos, neg, nulo);
return 0;
}
