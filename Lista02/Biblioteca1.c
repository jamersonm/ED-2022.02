#include <stdio.h>
#include "Biblioteca1.h"

int rotina1(int V, int k)
{
    if(V % k == 0)
        return 1;
    return 0;
}

int rotina2(int V)
{
    for(int i = 2; i < V; i++)
    {
        if(V % i == 0)
            return 0;
    }
    return 1;
}

int rotina3(int V)
{
    int i,x=0;
    for(i=1;i<=V/2;i++){
        if(V%i==0)
            x+=1;
    }
    if(x==V){
        return 1;
    }
    return 0;
}
