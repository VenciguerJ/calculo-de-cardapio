#include <stdio.h>


int main()
{

    int hamburguer, batataf, refrigerante, cerveja, doce, qntdh, qntdb, qntdr, qntdc, qntdd, total;
    // item + quantidade
    hamburguer = 8;
    batataf = 12;
    refrigerante = 3;
    cerveja = 5;
    doce = 3;

    printf("!total do pedido!");

    printf("\n");

    printf("Quantos hamburgueres foram consumidos?: ");
    scanf("%i", &qntdh);

    printf("\n");

    printf("Quantas batatas foram consumidas?: ");
    scanf("%i", &qntdb);

    printf("\n");

    printf("Quantos refris foram consumidos?: ");
    scanf("%i", &qntdr);

    printf("\n");

    printf("Quantas cervejas foram consumidas?: ");
    scanf("%i", &qntdc);

    printf("\n");

    printf("Quantos doces foram consumidos?: ");
    scanf("%i", &qntdd);

    printf("o total da sua conta foi de: ");

    total = (hamburguer * qntdh) + (batataf * qntdb) + (refrigerante * qntdr) + (cerveja * qntdc) + (doce * qntdd);
    printf("%i", total);
    printf(" reais");

    return 0;
}
