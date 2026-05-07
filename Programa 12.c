#include <stdio.h>
int main ()
{
  int N,i;
  int producto=1;
printf("Ingrese el valor de N: ");
scanf("%d", &N);

  for(i=1; i<=N; i++)
    {
      producto = producto *i;
    }
printf("El producto de los primeros %d numeros es: %d", N, producto);
return 0;
}
      
