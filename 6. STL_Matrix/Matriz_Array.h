#ifndef MATRIZ_ARRAY_H_INCLUDED
#define MATRIZ_ARRAY_H_INCLUDED
#include <iostream>
#include "Matriz_Array.h"

using namespace std;

//-----------------------------

template<typename T, size_t M, size_t N>
void inputMatriz(array<array<T, M>, N> &m)
{
    cout << "---------- INPUT ----------" << endl;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
        {
            cout << "[" << i+1 << "][" << j+1 << "]: ";
            cin >> m[i][j];
        }
}

template<typename T, size_t M, size_t N>
void outputMatriz(array<array<T, M>, N> &m)
{
    cout << endl << "---------- OUTPUT ----------" << endl;
    for(short unsigned i=0; i<m.size(); i++)
    {
        for(short unsigned j=0; j<m[i].size(); j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

//-----------------------------

template<typename T, size_t M, size_t N>
T somaMatriz(array<array<T, M>, N> &m)
{
    T soma = 0;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            soma += m.at(i).at(j);
    return soma;
}

template<typename T, size_t M, size_t N>
T produtoMatriz(array<array<T, M>, N> &m)
{
    T produto = 1;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            produto *= m.at(i).at(j);
    return produto;
}

template<typename T, size_t M, size_t N>
void MultKMatriz(array<array<T, M>, N> &m)
{
    cout << endl << "---------- Multiplica por K ----------" << endl;
    T K;
    cout << "Informe o valor para K: " << endl;
    cin >> K;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            m.at(i).at(j) *= K;
    outputMatriz(m);
}

//-----------------------------

template<typename T, size_t M, size_t N>
int verificaNula(array<array<T, M>, N> &m)
{
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(m.at(i).at(j) != 0)
                return 0;
    return 1;
}

template<typename T, size_t M, size_t N>
int verificaDiagonal(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(i != j && m.at(i).at(j) != 0)
                return 0;
            else
            {
                for(short unsigned i=0; i<m.size(); i++)
                    for(short unsigned j=0; j<m[i].size(); j++)
                        if(i == j && m.at(i).at(j) == 0)
                            return 0;
            }
    return 1;
}

template<typename T, size_t M, size_t N>
int verificaIdentidade(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    if(verificaDiagonal(m) == 1)
        for(short unsigned i=0; i<m.size(); i++)
            for(short unsigned j=0; j<m[i].size(); j++)
                if(i == j && m.at(i).at(j) != 1)
                    return 0;
                else
                    return 1;
    return 0;
}

template<typename T, size_t M, size_t N>
int verificaEscalar(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    if(verificaDiagonal(m) == 1)
    {
        for(short unsigned i=1; i<m.size(); i++)
            for(short unsigned j=1; j<m[i].size(); j++)
                if(i == j && m.at(0).at(0) != m.at(i).at(j))
                    return 0;
                else
                    return 1;
    }
    return 0;
}

template<typename T, size_t M, size_t N>
int verificaSimetrica(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    array<array<T, M>, N> transposta;
    for(short unsigned i=0; i<transposta.size(); i++)
        for(short unsigned j=0; j<transposta[i].size(); j++)
            transposta.at(j).at(i) = m.at(i).at(j);
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(transposta.at(i).at(j) != m.at(i).at(j))
                return 0;
    return 1;
}

template<typename T, size_t M, size_t N>
int verificaAntiSimetrica(array<array<T, M>, N> &m)
{
    if(verificaSimetrica(m) == 0)
        return 0;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(i == j && m.at(i).at(j) != 0)
                return 0;
    return 1;
}

template<typename T, size_t M, size_t N>
int verificaSuperior(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(i > j && m.at(i).at(j) != 0)
                return 0;
    return 1;
}

template<typename T, size_t M, size_t N>
int verificaInferior(array<array<T, M>, N> &m)
{
    if(verificaNula(m) == 1)
        return 0;
    for(short unsigned i=0; i<m.size(); i++)
        for(short unsigned j=0; j<m[i].size(); j++)
            if(i < j && m.at(i).at(j) != 0)
                return 0;
    return 1;
}

//-----------------------------

template<typename T, size_t M, size_t N>
void dadosMatriz(array<array<T, M>, N> &m)
{
    cout << endl << "---------- DADOS ----------" << endl;
    cout << "Soma: " << somaMatriz(m) << endl;
    cout << "Produto: " << produtoMatriz(m) << endl;
    cout << "Nula: " << verificaNula(m) << endl;
    cout << "Diagonal: " << verificaDiagonal(m) << endl;
    cout << "Identidade: " << verificaIdentidade(m) << endl;
    cout << "Escalar: " << verificaEscalar(m) << endl;
    cout << "Simétrica: " << verificaSimetrica(m) << endl;
    cout << "Anti simétrica: " << verificaAntiSimetrica(m) << endl;
    cout << "Triangular superior: " << verificaSuperior(m) << endl;
    cout << "Triangular inferior: " << verificaInferior(m) << endl;
}


#endif // MATRIZ_ARRAY_H_INCLUDED
