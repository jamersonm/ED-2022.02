#include <stdio.h>
#include "Biblioteca1.h"
#include "Biblioteca2.h"

void LerVetorInteiros(int n,int v[n])
{
    for(int i=0;i<n;i++){
        printf("Informe o valor na posição v[%i]: ", i);
        scanf("%i",&v[i]);
    }
}

int SomaInteirosDoVetor(int n,int v[n])
{
    int x=0;
    for(int i=0;i<n;i++){
        x=x+v[i];
    }
    return x;
}

int SomaInteirosMultiplosDoVetor(int n,int v[n],int k)
{
    int x;
    for(int i=0;i<n;i++){
        rotina1(v[i],k);
        if(rotina1==1){
            x=x+v[i];
        }
    }
    return x;
}

int rotina7(int n,int v[n])
{
    int x=0;
    for(int i=0;i<n;i++){
        rotina2(v[i]);
        if(rotina2==1){
            x=x+v[i];
        }
    }
    return x;
}

int rotina8(int n,int v[n])
{
    int x=0;
    for(int i=0;i<n;i++){
        rotina3(v[i]);
        if(rotina3==1){
            x=x+v[i];
        }
    }
    return x;
}
