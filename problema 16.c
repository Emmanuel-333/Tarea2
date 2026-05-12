#include <stdio.h>
int main ()
{
  int pares [100];
  int i;
  for (i=0;i<100; i++)
    {
      pares[i]= (i+1)*2;
    }
    printf("los primeros 100 numeros pares son:\n ");
    for (i=0; i<100; i++)
      {
        printf ("%d", pares[i]);
          if((i+1)%10==0) printf ("\n");
      }
return 0;
}
  
