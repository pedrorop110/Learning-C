#include <stdio.h>
#include <math.h>

int main()
{
    double resultado, numero; // Double para numeros .flutuantes

    printf("Digite um numero para coloca na raiz: \n");
    scanf("%lf", &numero); // %lf para doubles

    if (numero < 0){
        printf("nao é possivel calcular a raiz quadrada de um numero negativo");
    } else {
        resultado = sqrt(numero);
        printf("A raiz de %.0lf e': %.0lf\n",numero,resultado);
    }

    return 0;
}
