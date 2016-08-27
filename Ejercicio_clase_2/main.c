#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acumulador;
    int max;
    int min;
    int numero;
    int contador = 0;

    for (contador; contador < 5; contador++)
    {
        printf("Ingrese un numero: ");
        fflush(stdin);
        scanf("%d",&numero);
        acumulador = acumulador + numero;
        if (contador ==0)
        {
            max = numero;
            min = numero;
        }
        else {
            if (numero > max)
            {
                max = numero;
            }
            if (numero < min)
            {
                min = numero;
            }
        }
    }
    printf("El numero mas grande fue: %d\n",max);
    printf("El numero mas chico fue: %d\n",min);
    printf("La suma de los numeros es: %f\n",acumulador);
    printf("El promedio de los numeros es : %f\n",acumulador / contador);
    return 0;
}
