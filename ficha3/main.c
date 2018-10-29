#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &num);

    if(num == NULL){
        printf("numero é nulo\n");
    }
    else{
        printf("numero nao e nulo\n");
    }

    if(num<=0.0){
       printf("numero e negativo\n");
    }
    else{
        printf("numjero e positivo\n");
    }
    if(num % 2 == 0){
        printf("o numero e par");
    }
    else{
        printf("o numero e impar");
    }
    return 0;
}
