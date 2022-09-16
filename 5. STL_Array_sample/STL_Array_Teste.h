#ifndef STL_ARRAY_TESTE_H_INCLUDED
#define STL_ARRAY_TESTE_H_INCLUDED

#include <iostream>
#include <array>
#include <algorithm>    // sort, max_element, random_shuffle, remove_if, lower_bound
#include <iterator>     //begin, end, cbegin, cend, distance
#include <functional>   // plus, multiplies...
#include <numeric>      // tipos e funcoes... accumulate

#include "STL_Array.h"

using namespace std;

//-----------------------------------------------------------------
void Exemplo_Array_01_Aloc_Estatica()
{
    array<char , 3> vChar;
    array<int  , 5> vInt;
    array<float, 6> vFloat;

    //-----------------------------------------------------------------
    unsigned int i;
    for(i=0; i<vChar.size(); i++)
        vChar[i] = '0' + i;

    cout << endl;
    for(i=0; i<vChar.size(); i++)
        cout << vChar.at(i) << ' ';

    //-----------------------------------------------------------------
    for(i=0; i<vInt.size(); i++)
        vInt[i] = i;

    cout << endl;
    for(i=0; i<vInt.size(); i++)
        cout << vInt.at(i) << ' ';

    //-----------------------------------------------------------------
    for(i=0; i<vFloat.size(); i++)
        vFloat[i] = (float) i/10.0;

    cout << endl;
    for(i=0; i<vFloat.size(); i++)
        cout << vFloat.at(i) << ' ';
}

//-----------------------------------------------------------------
void Exemplo_Array_02_Aloc_Dinamica()
{
    array<char* , 3> vChar;
    array<int*  , 5> vInt;
    array<float*, 6> vFloat;

    //-----------------------------------------------------------------
    unsigned int i;
    for(i=0; i<vChar.size(); i++)
        vChar[i] = new char('0' + i);

     cout << endl;
    for(i=0; i<vChar.size(); i++)
    {
        cout << *((char*) vChar.at(i)) << ' ';
        delete vChar[i];
    }

    //-----------------------------------------------------------------
    for(i=0; i<vInt.size(); i++)
        vInt[i] = new int(i);

    cout << endl;
    for(i=0; i<vInt.size(); i++)
    {
        cout << *((int*) vInt.at(i)) << ' ';
        delete vInt[i];
    }

    //-----------------------------------------------------------------
    for(i=0; i<vFloat.size(); i++)
        vFloat[i] = new float((float) i/10.0);

    cout << endl;
    for(i=0; i<vFloat.size(); i++)
    {
        cout << *((float*) vFloat.at(i)) << ' ';
        delete vFloat[i];
    }
}

//-----------------------------------------------------------------
void Exemplo_Array_03_Ordenacao()
{
    array<int*  , 5> vInt;

    //-----------------------------------------------------------------
    unsigned int i;
    for(i=0; i<vInt.size(); i++)
        vInt[i] = new int(i);

    cout << endl;
    for(i=0; i<vInt.size(); i++)
        cout << *((int*) vInt.at(i)) << ' ';

    random_shuffle(begin(vInt), end(vInt));

    cout << endl;
    for(i=0; i<vInt.size(); i++)
        cout << *((int*) vInt.at(i)) << ' ';

    sort(begin(vInt), end(vInt));

    cout << endl;
    for(i=0; i<vInt.size(); i++)
    {
        cout << *((int*) vInt.at(i)) << ' ';
        delete vInt[i];
    }
}

//-----------------------------------------------------------------
void Exemplo_Array_04_Ordenacao()
{
    array<int, 5> vInt;

    //-----------------------------------------------------------------
    unsigned int i;
    for(i=0; i<vInt.size(); i++)
        vInt[i] = i;

    cout << endl << endl << "Escreve vetor original..." << endl;
    EscreveVetor( vInt );

    random_shuffle(begin(vInt), end(vInt));

    cout << endl << endl << "Escreve vetor embaralhado..." << endl;
    EscreveVetor( vInt );

    sort(begin(vInt), end(vInt));

    cout << endl << endl << "Escreve vetor ordenado..." << endl;
    EscreveVetor( vInt );
}

//-----------------------------------------------------------------
void Exemplo_Array_05_Parametros_Valor_Referencia()
{
	array<int, 4> v;// {1,2,3,4};

    cout << endl << "Altera array - Rotina passagem por valor - nao funciona" << endl;
    AlteraArray_Valor( v );
    EscreveVetor( v );
    cout  << endl;// << endl;

    cout << endl << "Altera array - Rotina passagem por referencia - OK" << endl;
    AlteraArray_Referencia( v );
    EscreveVetor( v );
    cout  << endl;// << endl;

    cout << endl << "Altera array - Rotina passagem por referencia - const - nao funciona - erro de compilacao" << endl;
//    AlteraArray_ReferenciaConst( v );
//    EscreveVetor( v );
//    cout << endl;// << endl;
}

//-----------------------------------------------------------------
void Exemplo_Array_06_Estatisticas()
{
    array<int, 5> vInt;
    array<int, 3> vEstatisticas;

    //-----------------------------------------------------------------
    unsigned int i;
    for(i=0; i<vInt.size(); i++)
        vInt[i] = i;

    cout << endl << endl << "Escreve vetor original..." << endl;
    EscreveVetor( vInt );

    random_shuffle(begin(vInt), end(vInt));

    CalculaEstatisticaVetor(vInt, vEstatisticas);

    cout << endl << endl << "Escreve vetor de estatisticas (menor, media, maior)..." << endl;
    EscreveVetor( vEstatisticas );
}

//-----------------------------------------------------------------
void STL_Array_Teste()
{
	cout  << endl << "Exemplo com alocacao estatica...";
    Exemplo_Array_01_Aloc_Estatica();

    cout  << endl << endl << "Exemplo com alocacao dinamica...";
    Exemplo_Array_02_Aloc_Dinamica();

    cout  << endl << endl << "Exemplo de ordenacao (alocacao dinamica - errado pois considera endereco de memoria e nao o valor)...";
    Exemplo_Array_03_Ordenacao();

    cout  << endl << endl << "Exemplo de ordenacao (alocacao estatica - OK)...";
    Exemplo_Array_04_Ordenacao();

    cout  << endl << endl << "Passagem de parametros por valor e referencia...";
	Exemplo_Array_05_Parametros_Valor_Referencia();

    cout  << endl << endl << "Exemplos com rotinas...";
    Exemplo_Array_06_Estatisticas();

    // teste de rotina com array com tipos e dimensoes quaisquer
    array<int  , 4> v {1,2,3,4};
    array<float, 3> w {1.1,2.2,3.3};

    cout << endl << endl << "Soma " << SomaVetor(v);
    cout << endl << endl << "Soma " << SomaVetor(w);

    // teste operacoes prontas na STL
    cout << endl << endl << "Valor encontrado " <<
        *((int*)find(v.begin(), v.end(), 2));

    cout << endl << endl <<  "Soma " <<
        accumulate(v.begin(), v.end(), 0, plus<int>());
    cout << endl << endl <<  "Produto " <<
        accumulate(v.begin(), v.end(), 1, multiplies<int>());
}

#endif // STL_ARRAY_TESTE_H_INCLUDED
