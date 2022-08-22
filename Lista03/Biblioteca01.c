#include "Biblioteca01.h"

int VerificaMatrizNula(int m, int n, int mat[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[m][n] < 0 || mat[m][n] > 0)
            {
                printf("AQUI");
                return 0;
            }
        }
    }
    return 1;
}
