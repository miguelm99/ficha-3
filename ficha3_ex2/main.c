#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("insira o valor das 3 linhas: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 == num2 && num2==num3){
        printf("e um triangulo equilatero");
    }
    else if(num1 == num2 || num1 == num3 || num2 == num3){
        printf("e um traingulo isoscele");
    }
    else if(num1!=num2 && num2!= num3){
        printf("e um triangulo escaleno");
    }
    return 0;
}
