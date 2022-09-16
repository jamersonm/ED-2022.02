#ifndef STL_MATRIZ_H_INCLUDED
#define STL_MATRIZ_H_INCLUDED

#include <iostream>
#include <array>
#include <algorithm>    // sort, max_element, random_shuffle, remove_if, lower_bound
#include <iterator>     //begin, end, cbegin, cend, distance
#include <functional>   // plus, multiplies...
#include <numeric>      // tipos e funcoes... accumulate

using namespace std;

// modelo para implementacao com tipo T e tamanho MxN variaveis
template<typename T, size_t M, size_t N>
void LeMatriz(array<array<T, M>, N> &m)
{
    unsigned int i, j;
    for(i=0; i<m.size(); i++)
        for(j=0; j<m[i].size(); j++)
            cin >> m[i][i];
}

template<typename T, size_t M, size_t N>
void EscreveMatriz(array<array<T, N>, M> &m)
{
    unsigned int i, j;
    for(i=0; i<m.size(); i++)
    {
        cout << endl;
        for(j=0; j<m[i].size(); j++)
            cout << m[i][i];
    }
}

template<typename T, size_t M, size_t N>
T SomaMatriz(array<array<T, N>, M> &m)
{
    unsigned int i, j;
    T fSoma = 0;
    for(i=0; i<m.size(); i++)
        for(j=0; j<m[i].size(); j++)
            fSoma += m.at(i).at(j);

    return fSoma;
}

template<typename T, size_t M, size_t N>
void SomaMatrizPorColuna(array<array<T, N>, M> &m, array<T, N> &v)
{
    unsigned int i, j;
    for(i=0; i<v.size(); i++)
        v[i] = 0;

    for(i=0; i<m.size(); i++)
        for(j=0; j<m[i].size(); j++)
            v[j] += m.at(i).at(j);
}

#endif // STL_MATRIZ_H_INCLUDED
