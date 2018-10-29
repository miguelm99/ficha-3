#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    printf("insira um numero");
    scanf("%d", &mes);
    switch(mes)
   {
	case 1:
	       printf("Janeiro\n");
	       break;
	case 2:
	       printf("Fevereiro\n");
	       break;
	case 3:
	       printf("Marco\n");
	       break;
	case 4:
	       printf("Abril\n");
	       break;
	case 5:
	       printf("Maio\n");
	       break;
	case 6:
	       printf("Junho\n");
	       break;
	case 7:
	       printf("Julho\n");
	       break;
	case 8:
	       printf("Agosto\n");
	       break;
	case 9:
	       printf("Setembro\n");
	       break;
	case 10:
	       printf("Outobro\n");
	       break;
	case 11:
	       printf("Novembro\n");
	       break;
	case 12:
	       printf("Decenbro\n");
	       break;
	default:
	       printf("numero de mes invalido. \nPff tenta outro ....\n");
	       break;
      }
    return 0;
}
