#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, res=0;
    printf("Introduza um número inteiro [1;…;10]:");
    scanf("%i", &num);
    switch(num)
    {
    case 10: res=10+res;
    case 9: res=9+res;
    case 8: res=8+res;
    case 7: res=7+res;
    case 6: res=6+res;
    case 5: res=5+res;
    case 4: res=4+res;
    case 3: res=3+res;
    case 2: res=2+res;
    case 1: res=1+res;
            printf("Resultado: %i", res);
            break;

    }
    return 0;
}
