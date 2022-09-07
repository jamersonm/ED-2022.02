#include "Biblioteca03.h"

int VerificaMatrizOposta(int m, int n, int matA[m][n], int matB[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matA[i][j] - (2*matA[i][j]) != matB[i][j])
                return 0;
        }
    }
    return 1;
}

int VerificaMatrizTransposta(int m, int n, int matA[m][n], int matB[n][m])
{
    int transposta[n][m];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            transposta[j][i] = matA[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(transposta[i][j] != matB[i][j])
                return 0;
        }
    }
    return 1;
}
