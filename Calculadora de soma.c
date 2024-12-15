#include <stdio.h>

int main ()
{
    int numeroA;
    int numeroB;
    int resultado;

    printf("Calculadora de soma\n");

    printf ("Primeiro valor: ");
    scanf ("%d",&numeroA);

    printf ("Segundo valor: ");
    scanf ("%d",&numeroB);

resultado = numeroA + numeroB;

printf ("Resultado: %d",resultado);

    return 0;
}