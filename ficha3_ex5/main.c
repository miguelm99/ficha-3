#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, res;
    char ari;
    printf("Introduza dois números inteiros e a operação aritmética a realizar\n");
    printf("Número1: ");
    scanf("%i", &num1);
    printf("Número2: ");
    scanf("%i", &num2);
    printf("Operação aritmética: ");
    scanf(" %c", &ari);

    switch(ari){
        case '+':
            res=num1+num2;
            printf("%i + %i = %i", num1, num2, res);
            break;
        case '-':
            res=num1-num2;
            printf("%i - %i = %i", num1, num2, res);
            break;
        case '*':
            res=num1*num2;
            printf("%i * %i = %i", num1, num2, res);
            break;
        case '/':
            res=num1/num2;
            printf("%i / %i = %i", num1, num2, res);
            break;
        case '%':
            res=num1%num2;
            printf("%i % %i = %i", num1, num2, res);
            break;
        default:
            printf("operador invalido\n");
            break;
    }


    return 0;
}
