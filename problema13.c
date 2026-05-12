#include<stdio.h>
int main()
{
  int n, i ,suma =0;
  printf("Cantidad de elemntos :");
  scanf("%d", &n);

  int arreglo [n];
  for(i=0; i<n; i++)
      {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
      }
printf("La suma total es: %d", &suma);
return 0;
}
