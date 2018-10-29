#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    char ordenacao;
    printf("Introduza três números inteiros\n");
    printf("numero 1: ");
    scanf("%i", &num1);
    printf("numero 2: ");
    scanf("%i", &num2);
    printf("numero 3: ");
    scanf("%i", &num3);
    printf("Indique a ordenação (C)rescente ou (D)ecrescente:");
    scanf(" %c", &ordenacao);
    if(ordenacao=='d'){
        if(num1>num2 && num1>num3){
            if(num2>num3){
                printf("%i, %i, %i", num1, num2, num3);
            }
            else{
                printf("%i, %i, %i", num1, num3, num2);
            }
        }
        else if(num2>num1 && num2>num3){
            if(num1>num3){
                printf("%i, %i, %i", num2, num1, num3);
            }
            else{
                printf("%i, %i, %i", num2, num3, num1);
            }
        }
        else if(num3>num1 && num3>num2){
            if(num1>num2){
                printf("%i, %i, %i", num3, num1, num2);
            }
            else{
                printf("%i, %i, %i", num3, num2, num1);
            }
        }
    }




    if(ordenacao=='c'){
        if(num1<num2 && num1<num3){
            if(num2<num3){
                printf("%i, %i, %i", num1, num2, num3);
            }
            else{
                printf("%i, %i, %i", num1, num3, num2);
            }
        }
        else if(num2<num1 && num2<num3){
            if(num1<num3){
                printf("%i, %i, %i", num2, num1, num3);
            }
            else{
                printf("%i, %i, %i", num2, num3, num1);
            }
        }
        else if(num3<num1 && num3<num2){
            if(num1<num2){
                printf("%i, %i, %i", num3, num1, num2);
            }
            else{
                printf("%i, %i, %i", num3, num2, num1);
            }
        }
    }


    return 0;
}
