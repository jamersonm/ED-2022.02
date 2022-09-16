#ifndef VECTOR_TESTE_INT_H_INCLUDED
#define VECTOR_TESTE_INT_H_INCLUDED

#include <iostream>
#include <vector>

#include <algorithm>    // sort, max_element, random_shuffle, remove_if, lower_bound
#include <iterator>     //begin, end, cbegin, cend, distance

using namespace std;

void Exemplo_Vector_01()
{
    cout << endl << "EXEMPLO 01 - formas de acesso" << endl << endl;

    vector<int *> v;
    int *p;

    for(int i=0; i<=100; i++)
        v.push_back(new int(i));

    cout << " interacao 01 com vector " << endl;
    for(int i=0; i<=100; i++)
    {
        p = (int *) v[i];
        cout << *p << " ";
    }

    cout << endl << endl << " interacao 02 com vector " << endl;
    for(int *n : v)
        cout << *n << " ";

    cout << endl << endl << " interacao 03 com vector " << endl;
    for(vector<int*>::iterator v_iter = v.begin(); v_iter != v.end(); v_iter++)
        cout << **v_iter << " ";

    while( v.size() )
    {
        p = (int *) v[v.size() -1];
        v.pop_back();
        delete p;
    }
}

void Exemplo_Vector_02()
{
    cout << endl << "EXEMPLO 02 - Dimensionamento" << endl << endl;

    vector<int *> v;
    int *p;

    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    v.push_back(new int(1));
    cout << endl;
    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    v.push_back(new int(2));
    cout << endl;
    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    v.push_back(new int(3));
    cout << endl;
    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    v.push_back(new int(4));
    cout << endl;
    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    while( v.size() )
    {
        p = (int *) v[v.size() -1];
        v.pop_back();
        delete p;
    }
}

void Exemplo_Vector_03()
{
    cout << endl << "EXEMPLO 03 - realocacao de memoria" << endl << endl;

    vector<int *> v;
    int *p;

    cout << "Tamanho......"     << v.size()     << endl
         << "Tamanho maximo..." << v.max_size() << endl
         << "Capacidade..."     << v.capacity() << endl;

    cout << " Insercao " << endl;
    for(int i=0; i<=100; i++)
    {
        v.push_back(new int(i));

        cout << "Tamanho......"     << v.size()     << endl
             << "Tamanho maximo..." << v.max_size() << endl
             << "Capacidade..."     << v.capacity() << endl << endl;
    }

    cout << " Exclusao " << endl;
    while( v.size() )
    {
        p = (int *) v[v.size() -1];
        v.pop_back();
        delete p;

        cout << endl;        cout << "Tamanho......"     << v.size()     << endl
             << "Tamanho maximo..." << v.max_size() << endl
             << "Capacidade..."     << v.capacity() << endl << endl;

    }
}

void Exemplo_Vector_04()
{
    cout << endl << "EXEMPLO 04 - Redimensionando... altera o tamanho, mas nao a capacidade" << endl << endl;

    vector<int> v;

    for(int i=0; i<=100; i++)
        v.push_back(i);

    cout << endl << endl << " interacao 01 com vector " << endl;
    for(int i=0; i<=100; i++)
        cout << v[i] << " ";

    cout << endl << endl;
    while( v.size() )
    {
        v.pop_back();

        if (v.size() % 10 == 0)
        {
            cout << "Tamanho......"     << v.size()     << endl
                 << "Tamanho maximo..." << v.max_size() << endl
                 << "Capacidade..."     << v.capacity() << endl << endl;

            v.resize(v.size());

            cout << "Tamanho......"     << v.size()     << endl
                 << "Tamanho maximo..." << v.max_size() << endl
                 << "Capacidade..."     << v.capacity() << endl << endl;
        }
    }
}

void Exemplo_Vector_05()
{
    cout << endl << "EXEMPLO 05 - Ordenacao - ERRADO" << endl << endl;

    vector<int *> v;
    int *p;

    for(int i=0; i<=100; i++)
        v.push_back(new int(i));

    cout << endl << endl << " interacao 01 com vector " << endl;
    for(int i=0; i<=100; i++)
    {
        p = (int *) v[i];
        cout << *p << " ";
    }

    random_shuffle(begin(v), end(v));
    cout << endl << endl << " interacao 02 com vector - embaralhado" << endl;
    for(int i=0; i<=100; i++)
    {
        p = (int *) v[i];
        cout << *p << " ";
    }

    sort(begin(v), end(v));

    cout << endl << endl << " interacao 03 com vector - ordenado - errado... endereco de memoria" << endl;
    for(int i=0; i<=100; i++)
    {
        p = (int *) v[i];
        cout << *p << " ";
    }

    while( v.size() )
    {
        p = (int *) v[v.size() -1];
        v.pop_back();
        delete p;
    }
}

void Exemplo_Vector_06()
{
    cout << endl << "EXEMPLO 06 - Ordenacao - CORRETO" << endl << endl;

    vector<int> v;

    for(int i=0; i<=100; i++)
        v.push_back(i);

    cout << endl << endl << " interacao 01 com vector " << endl;
    for(int i=0; i<=100; i++)
        cout << v[i] << " ";

    random_shuffle(begin(v), end(v));
    cout << endl << endl << " interacao 02 com vector - embaralhado" << endl;
    for(int i=0; i<=100; i++)
        cout << v[i] << " ";

    sort(begin(v), end(v));

    cout << endl << endl << " interacao 03 com vector - ordenado - correto... valores inteiros" << endl;
    for(int i=0; i<=100; i++)
        cout << v[i] << " ";

    while( v.size() )
        v.pop_back();
}

#endif // VECTOR_TESTE_INT_H_INCLUDED
