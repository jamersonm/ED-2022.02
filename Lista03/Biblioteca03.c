#include "Biblioteca03.h"

int VerificaMatrizOposta(int m, int n, int matA[m][n], int matB[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matA[i][j] - (2*matA[i][j]) != matB[m][n])
                return 0;
        }
    }
    return 1;
}

int VerificaMatrizTransposta(int m, int n, int matA[m][n], int matB[n][m])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matA[i][j] != matB[j][i])
                return 0;
        }
    }
    return 1;
}
