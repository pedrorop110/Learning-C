#include <stdio.h>

int main()
{
    int base;
    int altura;
    int perimetro;
    int area;

    printf("Calculando um triangulo\n");

    printf("Insira o valor da base: ");
    scanf("%d",&base);

    printf("Insira o valor da altura: ");
    scanf("%d",&altura);

    perimetro = 2*(base + altura);
    area = base * altura;

    printf("O valor da area e igual a: %d\n",area);
    printf("O valor do perimetro e igual a: %d",perimetro);

    return 0;
}