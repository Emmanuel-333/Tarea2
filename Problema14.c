#include <stdio.h>

int main() {
    int n, i, N, contador =0;
    
    printf("Cantidad de elementos: ");
    scanf("%d", &n);
    
    int arreglo[n];
    for(i = 0; i < n; i++)
      {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
      }
printf("Numero a buscar: ");
scanf("%d", &N);
  for(i=0; i<n; i++)
  {
    if(arreglo [i]==N)
      {
          contador++;
      }
  }
printf("El numero &d se repite %d veces", N, contador);
return 0;
}
  
