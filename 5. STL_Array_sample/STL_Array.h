#include <iostream>
#include <array>
#include <algorithm>    // sort, max_element, random_shuffle, remove_if, lower_bound
#include <iterator>     //begin, end, cbegin, cend, distance
#include <functional>   // plus, multiplies...
#include <numeric>      // tipos e funcoes... accumulate

using namespace std;

//-----------------------------------------------------------------
// modelo para implementacao com tipo type_t e tamanho N variaveis
template<typename type_t, size_t N>
void LeVetor(array<type_t, N>& v)
{
    unsigned int i;
    for(i=0; i<v.size(); i++)
        cin >> v[i];
}

template<typename type_t, size_t N>
void EscreveVetor(array<type_t, N>& v)
{
    unsigned int i;
    for(i=0; i<v.size(); i++)
        cout << v[i] << " ";
}

template<typename T, size_t N>
void AlteraArray_Valor(array<T, N> v)   // nao funciona
{
    unsigned int i;

    for(i=0; i<v.size(); i++)
        v.at(i) = i;
}

template<typename T, size_t N>
void AlteraArray_Referencia(array<T, N> &v)
{
    unsigned int i;

    for(i=0; i<v.size(); i++)
        //v.at(i) = i;
        v[i] = i;
}

template<typename T, size_t N>
void AlteraArray_ReferenciaConst(const array<T, N> &v)
{
    unsigned int i;

    for(i=0; i<v.size(); i++)
        v[i] = i;   // acusa erro de compilacao
}

template<typename type_t, size_t N>
type_t SomaVetor(array<type_t, N>& v)
{
    unsigned int i;
    type_t fSoma = 0;
    for(i=0; i<v.size(); i++)
        fSoma += v.at(i);

    return fSoma;
}

template<typename type_t, size_t N>
type_t EncontraMaiorElementoVetor(array<type_t, N>& v)
{
    unsigned int i;
    type_t maior = v[0];
    for(i=0; i<v.size(); i++)
        if (v[i] > maior)
            maior = v[i];

    return maior;
}

template<typename type_t, size_t N>
type_t EncontraMenorElementoVetor(array<type_t, N>& v)
{
    unsigned int i;
    type_t menor = v[0];
    for(i=0; i<v.size(); i++)
        if (v[i] < menor)
            menor = v[i];

    return menor;
}

template<typename type_t, size_t N>
type_t CalculaMediaVetor(array<type_t, N>& v)
{
    return SomaVetor( v )/ v.size();
}

template<typename type_t, size_t N>
void CalculaEstatisticaVetor(array<type_t, N>& v, array<type_t, 3>& vEstatisticas)
{
    vEstatisticas[0] = EncontraMenorElementoVetor( v );
    vEstatisticas[1] = CalculaMediaVetor( v );
    vEstatisticas[2] = EncontraMaiorElementoVetor( v );
}
