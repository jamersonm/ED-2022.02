#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Biblioteca01.h"
#include "Biblioteca02.h"

void preencherMatriz(int m, int n, int mat[m][n])
{
    printf("======   PREENCHER MATRIZ   ======\n");
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

    printf("Informe o número de linhas: ");
    scanf("%d", &lin);
    printf("Informe o número de colunas: ");
    scanf("%d", &col);

    int mat[lin][col];

    preencherMatriz(lin, col, mat);
    exibirMatriz(lin, col, mat);

    printf("\n======   VERIFICAÇÕES   ======\n");
    //MATRIZ NULA
    printf("Matriz nula: %d \n",VerificaMatrizNula(lin, col, mat));
    if(lin == col)
    {
        //MATRIZ DIAGONAL
        printf("Matriz diagonal: %d \n",VerificaMatrizDiagonal(lin, mat));
        //MATRIZ IDENTIDADE
        printf("Matriz identidade: %d \n",VerificaMatrizIdentidade(lin, mat));
        //MATRIZ SIMÉTRICA
        printf("Matriz simétrica: %d \n",VerificaMatrizSimetrica(lin, mat));
    }
    else
    {
        printf("A matriz informada não é quadrada.\n");
    }
    return 0;
}
