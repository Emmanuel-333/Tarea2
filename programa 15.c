#include<stdio.h>
int main() 
{
    int n, i, positivos =0,negativos =0,nulos =0 ;
    
    printf("Cantidad de elementos: ");
    scanf("%d", &n);
    
    int arreglo[n];
    for(i = 0; i < n; i++) 
    {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    for(i=0; i<n; i++)
      {
        if(arreglo[i]>0) positivos++;
            else if (arreglo[i]<0) negativos++;
            else nulos++;   
      }
printf("Positivos: &d\n Negativos: %d\n Nulos: %d\n", positivos, negativos, nulos);
return 0;
}
      
