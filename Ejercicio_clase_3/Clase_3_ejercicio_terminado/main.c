#include <stdio.h>
#include <stdlib.h>
float numero();
float calculoArea(float);

int main()
{
float radio;
float resultado;

    radio = numero();
    resultado = calculoArea(radio);
    printf("El area del circulo es: %.2f ",resultado);
    return 0;
}
/**
* \brief pide un numero y luego lo retorna
* \return retorna el numero que ingresa el usuario
*
*/
float numero()
{
    float numero;
    printf("Por favor ingrese el radio del circulo \n");
    scanf("%f",&numero);
    return numero;
}
/**
* \brief calcula el area de un circulo
* \param calcula el area
* \return hace el calculo del area tomando las variables ingresadas
*
*/
float calculoArea(float radio)
{
    float area;
    area = 3.14 *radio*radio;
    return area;
}
