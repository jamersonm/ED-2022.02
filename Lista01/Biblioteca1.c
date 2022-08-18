#include "Biblioteca1.h"

int rotina5(int V, int k)
{
    if(V % k == 0)
        return 1;
    return 0;
}

int rotina6(int V)
{
    for(int i = 2; i < V; i++)
    {
        if(V % i == 0)
            return 0;
    }
    return 1;
}
