#include <stdio.h>

int main ()
{
    int pedro;

/* Aqui o comando " switch, case, default ele funcionar da seguinte maneira"*/

    printf("Isira o numero de 1 a 3. \n");
        scanf("%d",&pedro);

    switch (pedro){
        case 1:
            printf("Primeiro\n");
                break;
        case 2:
            printf("Segundo\n");
                break;
        case 3:
            printf("Terceiro\n");
                break;
        default:
            printf("Opcao invalida\n");
                break;
    
    }


    return 0;
}