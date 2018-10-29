#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("insere o quanto gastou\n");
    scanf("%d", &num);
    if(num<=500){
        printf("Desconto de 0%");
    }
    else if(num>=500 && num<=1250){
        printf("Desconto de 4%");
    }
    else if(num>=1250 && num<=2000){
        printf("Desconto de 6%");
    }
    else if(num>=2000){
        printf("Desconto de 8%");
    }
    return 0;
}
