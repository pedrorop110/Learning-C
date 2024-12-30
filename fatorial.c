#include <stdio.h>

int main ()
{
    int fatorial = 5;
    int resultado = 1;

    for ( ; fatorial >= 1; --fatorial){ // Enquanto fatorial for maior ou igual a 1; diminiui -1;
        resultado *= fatorial; // Mesma coisa que: resultado = resultado * fatorial;
    }

    printf("O numero fatorial e': %d\n",resultado); // Printa a frase e o resultado

//  Na linha 8 existe um espaço em branco, isso porque ja aderimos um valor a " fatorial " que é igual a 5.

    return 0;
}