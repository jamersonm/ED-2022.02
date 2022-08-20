#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "Biblioteca1.h"
#include "Biblioteca2.h"


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a = 0, b = 0,n, v[n],k;

    //ROTINA 1
    printf("Rotina 1 - Verificar multiplicidade \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    printf("Digite um número inteiro: ");
    scanf("%i", &b);
    if(rotina1(a, b) == 1)
        printf("%i é múltiplo de %i", a, b);
    else
        printf("%i não é múltiplo de %i", a, b);

    printf("\n\n");

    //ROTINA 2
    printf("Rotina 2 - Verificar número primo \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    if(rotina2(a) == 1)
        printf("%i é um número primo", a);
    else
        printf("%i não é um número primo", a);

    printf("\n\n");

    //ROTINA 3
    printf("Rotina 3 - Verificar número perfeito \n");
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    if(rotina3(a) == 1)
        printf("%i é um número perfeito", a);
    else
        printf("%i não é um número perfeito \n", a);

    //ROTINA 4
    printf("\nRotina 4 - Leitura valores de um vetor \n");
    printf("Informe o tamanho do vetor: ");
    scanf("%i", &n);
    LerVetorInteiros(n,v);

    //ROTINA 5
    printf("\nRotina 5 - Soma dos valores do vetor \n");
    printf("Resultado da soma: %i", SomaInteirosDoVetor(n,v));

    //ROTINA 6
    printf("\nRotina 6 - Soma dos valores múltiplos de k \n");
    printf("Informe o valor do número que será multiplicado por cada valor do vetor: \n");
    scanf("%i",&k);
    printf("Valor da soma: %i", SomaInteirosMultiplosDoVetor(n,v,k));

    //ROTINA 7
    printf("\nRotina 7 - Soma dos números primos \n");
    printf("Valor da soma: %i", rotina7(n,v));

    //ROTINA 8
    printf("\nRotina 8 - Soma dos números perfeitos \n");
    printf("Valor da soma: %i", rotina8(n,v));





}
