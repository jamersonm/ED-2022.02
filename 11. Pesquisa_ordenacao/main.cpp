#include <iostream>
#include <array>
#include <algorithm>
#include <list>
#include <time.h>
#include "Ordenacao.h"
#include "Pesquisa.h"

// Descomentar o exercicício desejado e comentar o outro
#define EX_01
//#define EX_02

using namespace std;

template<typename type_t, size_t N>
void  preencherArray(array<type_t, N>& a)
{
    srand (time(NULL));
    for(unsigned int i = 0; i < a.size(); i++)
        a.at(i) = rand() % a.size();
}

template<typename type_t, size_t N>
void exibirArray(array<type_t, N>& a)
{
    for(unsigned int i = 0; i < a.size(); i++)
        cout << a.at(i) << " ";
    cout << endl;
}

#ifdef EX_01
template<typename type_t, size_t N>
array<float, 5> exercicio_um(array<type_t, N>& a)
{
    clock_t t1, t2;
    array<float,  5> timer;
    array<type_t, N> a_copy;

    cout << "Array com " << a.size() << " posições" << endl;

    preencherArray(a);

    a_copy = a;

    t1 = clock();
    OrdenaBolha(a_copy);
    t2 = clock();
    timer.at(0) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (bolha): " << timer.at(0) << "s" << endl;

    a_copy = a;

    t1 = clock();
    OrdenaShake(a_copy);
    t2 = clock();
    timer.at(1) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (shake): " << timer.at(1) << "s" << endl;

    a_copy = a;

    t1 = clock();
    OrdenaSelection(a_copy);
    t2 = clock();
    timer.at(2) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (selection): " << timer.at(2) << "s" << endl;

    a_copy = a;

    t1 = clock();
    OrdenaShakeSelection(a_copy);
    t2 = clock();
    timer.at(3) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (shake selection): " << timer.at(3) << "s" << endl;

    a_copy = a;

    t1 = clock();
    OrdenaQuick(a_copy, 0, a_copy.size() - 1);
    t2 = clock();
    timer.at(4) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (quick): " << timer.at(4) << "s" << endl;
    cout << "------------------------------------------" << endl;

    return timer;
}
#endif // EX_01

#ifdef EX_02
template<typename type_t, size_t N>
array<float, 6> exercicio_dois(array<type_t, N>& a, array<int, 1000>& vProcurados)
{
    clock_t t1, t2;
    int idxAux;
    unsigned int i;
    array<float,  6> timer;

    cout << "Array com " << a.size() << " posições" << endl;

    preencherArray(a);
    OrdenaQuick(a, 0, a.size() - 1);

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        idxAux = BuscaSequencial(a, vProcurados.at(i));
    t2 = clock();
    timer.at(0) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (sequencial): " << timer.at(0) << "s" << endl;

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        idxAux = BuscaSequencialOrdenada(a, vProcurados.at(i));
    t2 = clock();
    timer.at(1) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (sequencial ordenada): " << timer.at(1) << "s" << endl;

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        idxAux = BuscaBinariaNaoRecursiva(a, vProcurados.at(i));
    t2 = clock();
    timer.at(2) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (binaria não recursiva): " << timer.at(2) << "s" << endl;

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        idxAux = BuscaBinariaRecursiva(a, vProcurados.at(i));
    t2 = clock();
    timer.at(3) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (binaria recursiva): " << timer.at(3) << "s" << endl;

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        find(a.begin(), a.end(), vProcurados.at(i));
    t2 = clock();
    timer.at(4) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (find): " << timer.at(4) << "s" << endl;

    t1 = clock();
    for(i = 0; i < vProcurados.size(); i++)
        binary_search(a.begin(), a.end(), vProcurados.at(i));
    t2 = clock();
    timer.at(5) = (float)(t2 - t1) / 1000.0F;
    cout << "Tempo gasto (binary_search STL): " << timer.at(5) << "s" << endl;
    cout << "------------------------------------------" << endl;

    return timer;
}

#endif // EX_02

int main()
{
    // ------------------------------------------------
    #ifdef EX_01

    array<int, 10> vDados10;
    array<float, 5> vDados10_timer;
    vDados10_timer = exercicio_um(vDados10);

    array<int, 100> vDados100;
    array<float, 5> vDados100_timer;
    vDados100_timer = exercicio_um(vDados100);

    array<int, 500> vDados500;
    array<float, 5> vDados500_timer;
    vDados500_timer = exercicio_um(vDados500);

    array<int, 1000> vDados1k;
    array<float, 5> vDados1k_timer;
    vDados1k_timer = exercicio_um(vDados1k);

    array<int, 5000> vDados5k;
    array<float, 5> vDados5k_timer;
    vDados5k_timer = exercicio_um(vDados5k);

    array<int, 10000> vDados10k;
    array<float, 5> vDados10k_timer;
    vDados10k_timer = exercicio_um(vDados10k);

    array<int, 50000> vDados50k;
    array<float, 5> vDados50k_timer;
    vDados50k_timer = exercicio_um(vDados50k);

    array<int, 100000> vDados100k;                         // Até onde meu PC vai
    array<float, 5> vDados100k_timer;
    vDados100k_timer = exercicio_um(vDados100k);

    /*array<int, 500000> vDados500k;
    array<float, 5> vDados500k_timer;
    vDados500k_timer = exercicio_um(vDados500k);*/

    #endif // EX_01
    // ------------------------------------------------
    #ifdef EX_02

    array<int, 1000> vProcurados;
    preencherArray(vProcurados);
    OrdenaQuick(vProcurados, 0, vProcurados.size() - 1);

    array<int, 10> vDados10;
    array<float, 6> vDados10_timer;
    vDados10_timer = exercicio_dois(vDados10, vProcurados);

    array<int, 100> vDados100;
    array<float, 6> vDados100_timer;
    vDados100_timer = exercicio_dois(vDados100, vProcurados);

    array<int, 500> vDados500;
    array<float, 6> vDados500_timer;
    vDados500_timer = exercicio_dois(vDados500, vProcurados);

    array<int, 1000> vDados1k;
    array<float, 6> vDados1k_timer;
    vDados1k_timer = exercicio_dois(vDados1k, vProcurados);

    array<int, 5000> vDados5k;
    array<float, 6> vDados5k_timer;
    vDados5k_timer = exercicio_dois(vDados5k, vProcurados);

    array<int, 10000> vDados10k;
    array<float, 6> vDados10k_timer;
    vDados10k_timer = exercicio_dois(vDados10k, vProcurados);

    array<int, 50000> vDados50k;
    array<float, 6> vDados50k_timer;
    vDados50k_timer = exercicio_dois(vDados50k, vProcurados);

    array<int, 100000> vDados100k;
    array<float, 6> vDados100k_timer;
    vDados100k_timer = exercicio_dois(vDados100k, vProcurados);

    array<int, 350000> vDados350k;                                    // Até onde meu PC vai
    array<float, 6> vDados350k_timer;
    vDados350k_timer = exercicio_dois(vDados350k, vProcurados);

    /*array<int, 500000> vDados500k;
    array<float, 6> vDados500k_timer;
    vDados500k_timer = exercicio_dois(vDados500k, vProcurados);*/

    #endif // EX_02
    // ------------------------------------------------

    return 0;
}
