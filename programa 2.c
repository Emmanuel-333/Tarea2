#include <stdio.h>

int main() 
{
   int radio, area, circunferencia;
   float pi= 3.1416;
    
    printf("Ingresa el radio del circulo: ");
    scanf("%d", &radio);
    
    area = pi * radio * radio;
    circunferencia = 2 * pi * radio;
    
    printf("Area = %d\n", area);
    printf("Circunferencia = %d\n", circunferencia);
    
    return 0;
}
