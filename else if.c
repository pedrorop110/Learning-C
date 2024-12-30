#include <stdio.h>

int main ()
{
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);

/*  O ELSE IF é usado para adicionar uma condição extra quando a condição anterior não é satisfeita.

    Ou seja, testa múltiplas condições em sequência.
*/

    if (idade <= 5){
        printf("bebe\n");
    } else if (idade >= 5 && idade < 10 ){
        printf("Crianca\n");
    } else if (idade >= 10 && idade < 13){
        printf("Pre-adolenscente\n");
    } else if (idade >= 13 && idade < 18){
        printf("Adolenscente\n");
    } else if (idade >= 18 && idade < 60){
        printf("Adulto\n");
    } else if (idade >= 60 && idade <= 103){
        printf("Idoso\n");
    } else if (idade > 103){
        printf("Ja ta morto essa lata velha\n");
    }
    

    return 0;
}