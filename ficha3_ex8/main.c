#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cat;
    int dep;
    int bonus=0;
    printf("Qual é a sua categoria?\n");
    scanf("%i", &cat);
    switch(cat){
    case 1:
        printf("vencimento base de 600€");
        printf("Qual e o seu numero de dependentes?");
        scanf("%i", &dep);
        if(dep=1){
            bonus=600*1.05;
            printf("%i", bonus);
        }
        else if(dep>=2){
            bonus=600*1.09;
            printf("%i", bonus);
        }
        break;
    case 2:
        printf("vencimento base de 750€");
        printf("Qual e o seu numero de dependentes?");
        scanf("%i", &dep);
        if(dep=1){
            bonus=750*1.03;
            printf("%i", bonus);
        }
        else if(dep>=2){
            bonus=750*1.07;
            printf("%i", bonus);
        }
        break;
    case 3:
        printf("vencimento base de 1000€");
        printf("Qual e o seu numero de dependentes?");
        scanf("%i", &dep);
        if(dep=1){
            bonus=1000*1.02;
            printf("%i", bonus);
        }
        else if(dep>=2){
            bonus=1000*1.05;
            printf("%i", bonus);
        }
        break;

    }
    return 0;
}
