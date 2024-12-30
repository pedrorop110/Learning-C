#include <stdio.h>

int main ()
{
    int senha;

    do { //Faça isso:
        printf("Digite sua senha: ");
        scanf("%d",&senha);
    } while (senha != 1234); // Até essa condição ser verdadeira

    printf("Acesso concedido");


    return 0;
}