#include <stdio.h>
#include "Biblioteca2.h"

int rotina7(int V)
{
    int pdig, udig, dig, inteiro = sqrt(V);
    if ( V >= 1000 && V <10000)
    {
        if(inteiro == sqrt(V))
        {
            pdig = floor((V/100));
            udig = V - (100*pdig);
            dig = pdig + udig;
            if(dig == inteiro)
                return 1;
        }
        return 0;
    }
    return -1;
}

int rotina8()
{
    int contador = 0;
    for(int i = 1000; i < 10000; i++)
    {
        if(rotina7(i) == 1)
        {
            contador++;
            printf("%i\n", i);
        }
    }
    return contador;
}
