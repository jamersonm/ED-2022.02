#include <stdio.h>
#include "Biblioteca01.h"
#include "Biblioteca02.h"

int VerificaMatrizDiagonal(int m, int mat[m][m])
{
    if(VerificaMatrizNula(m, m, mat) == 1)
        return 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i != j && mat[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int VerificaMatrizIdentidade(int m, int mat[m][m])
{
    if(VerificaMatrizNula(m, m, mat) == 1)
        return 0;
    else if(VerificaMatrizDiagonal(m, mat) == 1)
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == j && mat[i][j] != 1)
                {
                    return 0;
                }
                else
                    return 1;
            }
        }
    return 0;
}

int VerificaMatrizSimetrica(int m, int mat[m][m])
{
    if(VerificaMatrizNula(m, m, mat) == 1)
        return 0;
    int transposta[m][m];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
            transposta[j][i] = mat[i][j];
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(transposta[i][j] != mat[i][j])
                return 0;
        }
    }
    return 1;
}
