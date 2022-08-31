#include <stdio.h>
#include "Biblioteca1.h"
#include "Biblioteca2.h"

LerVetorInteiros(int n,int v[n])
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
    int x=0;
    for(int i=0;i<n;i++){
        if(rotina1(v[i],k)==1){
            x=x+v[i];
        }
    }
    return x;
}

int rotina7(int n,int v[n])
{
    int x=0;
    for(int i=0;i<n;i++){
        if(rotina2(v[i])==1){
            x=x+v[i];
        }
    }
    return x;
}

int rotina8(int n,int v[n])
{
    int x=0;
    for(int i=0;i<n;i++){
        if(rotina3(v[i])==1){
            x=x+v[i];
        }
    }
    printf("%i", x);
    return x;
}
