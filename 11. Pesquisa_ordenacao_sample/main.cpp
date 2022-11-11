#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include <array>
#include <list>

#include "Ordenacao.h"
#include "Pesquisa.h"

#include <algorithm>    // std::binary_search, std::sort

#define TAM 1000

using namespace std;

//=-=-=-=-= Array =-=-=-=-=

template<typename type_t, size_t N>
void  PreencheVetor_Int(array<type_t, N>& v)
{
    unsigned int i;

    /* initializa semente aleatoria: */
    srand (time(NULL));

    /* gera sequencia de valores entre 0 e 1000.000: */
    for(i=0; i<v.size(); i++)
        v[i] = rand() % v.size();
}

template<typename type_t, size_t N>
void EscreveVetor_Int(array<type_t, N>& v)
{
    unsigned int i;
    //cout << endl << endl;
    for(i=0; i<v.size(); i++)
        cout << v[i] << " ";
}

void Array_Ordenacao_Int()
{
    clock_t t1, t2;
    array<int, TAM> v, vClone;

    PreencheVetor_Int( v );
    vClone = v;

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    cout << endl << endl << "Array - Ordenacao!" << endl;
    t1 = clock();   // pega tempo do sistema
    OrdenaBolha( vClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Bolha (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
//    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    vClone = v;

    t1 = clock();   // pega tempo do sistema
    OrdenaShake( vClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Shake (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
//    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    vClone = v;

    t1 = clock();   // pega tempo do sistema
    OrdenaSelection( v );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Selection (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
//    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    vClone = v;

    t1 = clock();   // pega tempo do sistema
    OrdenaShakeSelection( v );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Shake Selection (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
    //    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    vClone = v;

    t1 = clock();   // pega tempo do sistema
    OrdenaQuick( v );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Quick (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
//    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );

    vClone = v;

    t1 = clock();   // pega tempo do sistema
    sort( v.begin(), v.end() );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Quick (em segundos): " <<  (float)(t2 - t1) / 1000.0F << endl;
//    EscreveVetor_Int( vClone );

//    cout << endl << "Original: " << endl;
//    EscreveVetor_Int( v );
//    cout << endl << "Clone: " << endl;
//    EscreveVetor_Int( vClone );
}

void Array_Pesquisa_Int()
{
    clock_t t1, t2;
    array<int, TAM> vConjunto, vProcurados;
//    array<int, 10> vConjunto {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << endl << endl << "Array - Pesquisa!" << endl;
//    cout << "Conjunto" << endl;
    PreencheVetor_Int( vConjunto );
    OrdenaQuick( vConjunto );
//    EscreveVetor_Int( vConjunto );

//    cout << endl << "Procurados" << endl;
    PreencheVetor_Int( vProcurados );
    OrdenaQuick  ( vProcurados );
//    EscreveVetor_Int( vProcurados );

    unsigned int i;
    int idxAux;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
    {
        idxAux = BuscaSequencial(vConjunto, vProcurados[i]);
//        cout << idxAux << " ";
//        cout << vProcurados[i] << " V[" << idxAux << "] = " << vConjunto[idxAux] << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Sequencial (em segundos): " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
    {
        idxAux = BuscaSequencialOrdenada(vConjunto, vProcurados[i]);
//        cout << idxAux << " ";
//        cout << vProcurados[i] << " V[" << idxAux << "] = " << vConjunto[idxAux] << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Sequencial Ordenada (em segundos): " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
    {
        idxAux = BuscaBinariaNaoRecursiva(vConjunto, vProcurados[i]);
//        cout << idxAux << " ";
//        cout << vProcurados[i] << " V[" << idxAux << "] = " << vConjunto[idxAux] << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Binaria NAO Recursiva (em segundos): " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
    {
        idxAux = BuscaBinariaRecursiva(vConjunto, vProcurados[i]);
//        cout << idxAux << " ";
//        cout << vProcurados[i] << " V[" << idxAux << "] = " << vConjunto[idxAux] << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Binaria Recursiva (em segundos): " << (float)(t2 - t1) / 1000.0F;

    // STL

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
        find(vConjunto.begin(), vConjunto.end(), vProcurados[i]);
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para find (em segundos) - find da STL: " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(i=0; i<vProcurados.size(); i++)
        binary_search(vConjunto.begin(), vConjunto.end(), vProcurados[i]);
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Binaria Recursiva (em segundos) - binary_search da STL: " << (float)(t2 - t1) / 1000.0F;
}

//=-=-=-=-= List =-=-=-=-=

template<typename type_t>
void  PreencheLista_Int(list<type_t>& v)
{
    /* limpa lista antiga*/
    while( v.size() )
        v.pop_back();

    unsigned int i;

    /* initializa semente aleatoria: */
    srand (time(NULL));

    /* gera sequencia de valores*/
    for(i=0; i<TAM; i++)
        v.push_back( rand() % TAM );
}

template<typename type_t>
void EscreveLista_Int(list<type_t>& v)
{
    cout << endl;// << endl;

    for(list<int>::iterator iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << " ";
}

void List_Ordenacao_Int()
{
    clock_t t1, t2;
    list<int> l, lClone;

    PreencheLista_Int( l );
    lClone = l;

//    cout << endl << "Original: " << endl;
//    EscreveLista_Int( l );
//    cout << endl << "Clone: " << endl;
//    EscreveLista_Int( lClone );

    cout << endl << endl << "List - Ordenacao!" << endl;
    t1 = clock();   // pega tempo do sistema
    OrdenaBolha( lClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Bolha (em segundos): " << (float)(t2 - t1) / 1000.0F << endl;
//    EscreveLista( v );

//    cout << endl << "Original: " << endl;
//    EscreveLista_Int( l );
//    cout << endl << "Clone: " << endl;
//    EscreveLista_Int( lClone );

    lClone = l;

    t1 = clock();   // pega tempo do sistema
    OrdenaShake( lClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Shake (em segundos): " << (float)(t2 - t1) / 1000.0F << endl;
//    EscreveLista( v );

//    cout << endl << "Original: " << endl;
//    EscreveLista_Int( l );
//    cout << endl << "Clone: " << endl;
//    EscreveLista_Int( lClone );

    lClone = l;

    t1 = clock();   // pega tempo do sistema
    OrdenaSelection( lClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Selection (em segundos): " << (float)(t2 - t1) / 1000.0F << endl;
//    EscreveLista( v );

//    cout << endl << "Original: " << endl;
//    EscreveLista_Int( l );
//    cout << endl << "Clone: " << endl;
//    EscreveLista_Int( lClone );

    lClone = l;

    t1 = clock();   // pega tempo do sistema
    OrdenaShakeSelection( lClone );
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Ordenacao Shake Selection (em segundos): " << (float)(t2 - t1) / 1000.0F << endl;
//    EscreveLista( v );

//    cout << endl << "Original: " << endl;
//    EscreveLista_Int( l );
//    cout << endl << "Clone: " << endl;
//    EscreveLista_Int( lClone );
}

void List_Pesquisa_Int()
{
    clock_t t1, t2;
    list<int> vConjunto, vProcurados;

    cout << endl << endl << "List - Pesquisa!" << endl;
//    cout << "Conjunto" << endl;
    PreencheLista_Int( vConjunto );
    OrdenaSelection( vConjunto );
//    array<int, 10> vConjunto {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//    EscreveLista( vConjunto );

//    cout << "Procurados" << endl;
    PreencheLista_Int( vProcurados );
    OrdenaSelection( vProcurados );
//    EscreveLista( vProcurados );

    int i;
    list<int>::iterator iterProcurado;
    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(iterProcurado = vProcurados.begin(); iterProcurado!=vProcurados.end(); iterProcurado++)
    {
        i = BuscaSequencial(vConjunto, *iterProcurado);
        if (i != -1)
            ;
//            cout << *iterConjunto << " ";// << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a busca
    cout << endl << "Tempo para Busca Sequencial (em segundos): " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(iterProcurado = vProcurados.begin(); iterProcurado!=vProcurados.end(); iterProcurado++)
    {
        i = BuscaSequencialOrdenada(vConjunto, *iterProcurado);
        if (i != -1)
            ;
//            cout << *iterConjunto << " ";// << endl;
    }
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a busca
    cout << endl << "Tempo para Busca Sequencial Ordenada (em segundos): " << (float)(t2 - t1) / 1000.0F;

    // STL

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(iterProcurado = vProcurados.begin(); iterProcurado!=vProcurados.end(); iterProcurado++)
        find(vConjunto.begin(), vConjunto.end(), *iterProcurado);
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para find (em segundos) - find da STL: " << (float)(t2 - t1) / 1000.0F;

    t1 = clock();   // pega tempo do sistema
//    cout << endl;
    for(iterProcurado = vProcurados.begin(); iterProcurado!=vProcurados.end(); iterProcurado++)
        binary_search(vConjunto.begin(), vConjunto.end(), *iterProcurado);
    t2 = clock();   // pega tempo do sistema
    // calcula tempo necessario para a ordenacao
    cout << endl << "Tempo para Busca Binaria (em segundos) - binary_search da STL: " << (float)(t2 - t1) / 1000.0F;
}

int main()
{
    Array_Ordenacao_Int();
    Array_Pesquisa_Int();
    List_Pesquisa_Int();
    Array_Ordenacao_Int();
    List_Ordenacao_Int();

    return 0;
}
