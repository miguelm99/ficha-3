#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, res;
    char ari;
    printf("Introduza dois n�meros inteiros e a opera��o aritm�tica a realizar\n");
    printf("N�mero1: ");
    scanf("%i", &num1);
    printf("N�mero2: ");
    scanf("%i", &num2);
    printf("Opera��o aritm�tica: ");
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
