#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Biblioteca1.h"
#include "Biblioteca2.h"
#include "Biblioteca3.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 0, b = 0;

    //ROTINA 5
    printf("Rotina 5 - Verificar multiplicidade \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    printf("Digite um número inteiro: ");
    scanf("%i", &b);
    if(rotina5(a, b) == 1)
        printf("%i é múltiplo de %i", a, b);
    else
        printf("%i não é múltiplo de %i", a, b);

    printf("\n\n");

    //ROTINA 6
    printf("Rotina 6 - Verificar número primo \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    if(rotina6(a) == 1)
        printf("%i é um número primo", a);
    else
        printf("%i não é um número primo", a);

    printf("\n\n");

    //ROTINA 7
    printf("Rotina 7 - Verificar propriedade de soma em números de 4 dígitos \n");
    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%i", &a);
    if(rotina7(a) == -1)
        printf("%i não é um número de 4 dígitos", a);
    else if(rotina7(a) == 0)
        printf("%i não atente a propriedade", a);
    else
        printf("%i atente a propriedade", a);

    printf("\n\n");

    //ROTINA 8
    printf("Rotina 8 - Todos os números que atendem a propriedade da rotina 7\n");
    rotina8();

    printf("\n\n");

    //ROTINA 9
    printf("Rotina 9 - Verificar número superticioso \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    if(rotina9(a) == 1)
        printf("%i é um número supersticioso", a);
    else
        printf("%i não é um número supersticioso", a);

    printf("\n\n");

    //ROTINA 10
    printf("Rotina 10 - Verificar número perfeito \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    if(rotina9(a) == 1)
        printf("%i é um número perfeito", a);
    else
        printf("%i não é um número perfeito", a);
}
