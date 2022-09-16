#include "Biblioteca1.h"

int rotina9(int V)
{
    if(rotina6(V) == 1)
    {
        while(V > 10)
            V = V - 10;
        if(V == 7)
            return 1;
    }
    return 0;
}

int rotina10(int V)
{
    int vetor[V];
    for(int i = 0; i < V; i++)
    {
        vetor[i] = 0;
    }
    for(int j = 1; j < V; j++)
    {
        if(rotina5(V, j) == 1)
            vetor[j] = j;
    }
    int soma = 0;
    for(int k = 0; k < V; k++)
    {
        soma = soma + vetor[k];
    }
    if(soma == V)
        return 1;
    return 0;
}
