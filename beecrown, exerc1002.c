#include <stdio.h>
#include <math.h>
#define pi 3.14159

/* Link da questão: https://resources.beecrowd.com/repository/UOJ_1002_en.html

Aqui ele pede para você calcular a area de um circulo

*/




int main() 
{
 double R,A;
 double n =pi;
 
 scanf("%lf",&R);
 
 A=n*pow(R,2);
 
 printf("A=%.4lf\n", A);
 
    return 0;
}
