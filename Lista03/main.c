#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Biblioteca01.h"
#include "Biblioteca02.h"
#include "Biblioteca03.h"

void preencherMatriz(int m, int n, int mat[m][n])
{
    printf("\n======   PREENCHER MATRIZ   ======\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Informe o valor para [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void exibirMatriz(int m, int n, int mat[m][n])
{
    printf("\n======   EXIBIR MATRIZ   ======\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lin, col;

    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &col);

    int matriz[lin][col];

    preencherMatriz(lin, col, matriz);
    exibirMatriz(lin, col, matriz);

    printf("\n======   VERIFICAÇÕES   ======\n");
    //MATRIZ NULA
    printf("Matriz nula: %d \n",VerificaMatrizNula(lin, col, matriz));
    if(lin == col)
    {
        //MATRIZ DIAGONAL
        printf("Matriz diagonal: %d \n",VerificaMatrizDiagonal(lin, matriz));
        //MATRIZ IDENTIDADE
        printf("Matriz identidade: %d \n",VerificaMatrizIdentidade(lin, matriz));
        //MATRIZ SIMÉTRICA
        printf("Matriz simétrica: %d \n",VerificaMatrizSimetrica(lin, matriz));
    }
    else
    {
        printf("A matriz informada não é quadrada.\n");
    }

    printf("\n======   MATRIZ OPOSTA   ======\n");
    int linA, colA;
    printf("Informe o número de linhas das matrizes: ");
    scanf("%d", &linA);
    printf("Informe o número de colunas das matrizes: ");
    scanf("%d", &colA);
    int matrizA[linA][colA];
    int matrizB[linA][colA];
    printf("Preencher matriz A");
    preencherMatriz(linA, colA, matrizA);
    printf("Preencher matriz B");
    preencherMatriz(linA, colA, matrizB);
    printf("\nMatriz A oposta à B: %d \n", VerificaMatrizOposta(linA, colA, matrizA, matrizB));

    printf("\n======   MATRIZ TRANSPOSTA   ======\n");
    int linC, colC;
    printf("Informe o número de linhas das matrizes: ");
    scanf("%d", &linC);
    printf("Informe o número de colunas das matrizes: ");
    scanf("%d", &colC);
    int matrizC[linC][colC];
    int matrizD[colC][linC];
    printf("Preencher matriz A");
    preencherMatriz(linC, colC, matrizC);
    printf("Preencher matriz B");
    preencherMatriz(colC, linC, matrizD);
    printf("\nMatriz A transposta à B: %d \n", VerificaMatrizTransposta(linC, colC, matrizD, matrizD));

    return 0;
}
