#ifndef STL_ARRAY_H_INCLUDED
#define STL_ARRAY_H_INCLUDED
#include <array>
#include <iostream>

using namespace std;

template<typename T, size_t N>
void ExibirVetor(array<T, N>& v)
{
    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
}

template<typename T, size_t N>
T SomaVetor(array<T, N>& v)
{
    unsigned int i;
    T Soma = 0;
    for(i=0; i<v.size(); i++)
        Soma += v.at(i);

    return Soma;
}

template<typename T, size_t N>
T MultiplicaVetor(array<T, N>& v)
{
    unsigned int i;
    T Multiplica = 1;
    for(i=0; i<v.size(); i++)
        Multiplica *= v.at(i);

    return Multiplica;
}

template<typename T, size_t N>
void KVetor(array<T, N>& v)
{
    T K;                             //A fim de implementar K do tipo T (como requisitado) a declaração é feita no escopo da rotina.
    cout << "Informe um valor para K: ";
    cin >> K;
    for(int i=0; i<v.size(); i++)
        v.at(i) *= K;
}


#endif // STL_ARRAY_H_INCLUDED
