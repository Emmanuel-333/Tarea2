#include<stdio.h>
int main()
{
  int distancia, dias, distanciatotal, precio;
  printf("Ingrese la distancia de ida: ");
  scanf("%d", &distancia);
  printf("Ingrese el tiempo de entancia: ");
  scanf("%d', &dias);
    distanciatotal= (2*distancia);
    precio = 0.23*distanciatotal;
    
    if (distanciatotal>800 && dias>7)
    {
      precio = precio *30/100;
    }
  printf("El precio final es de: %d", precio);
  return 0;
}
  
    
