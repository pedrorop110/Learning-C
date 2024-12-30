#include <stdio.h>

int main ()
{
    int idade;

//  IF ELSE é usado para uma condição expecifica, ou seja, O ELSE é executado caso a condição do IF seja falsa.

    printf("Favor informar idade; \n");
    scanf("%d",&idade);

    if (idade >= 18) // Caso a idade for meno que 10 ele ira printar a mensagem abaixo:
    {
        printf("Pode ser preso!\n");
    } else { // Caso for menor ou igual a 18 printar a mensagem abaixo:
        printf("Vai ter ficha limpa krai\n");
    }

    return 0;
}