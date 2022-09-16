#include <iostream>

#include "STL_Matriz_Teste.h"

int main()
{
    cout  << endl << "Exemplo com alocacao estatica...";
    Exemplo_Matriz_01();

    cout  << endl << "Exemplo com alocacao dinamica...";
    Exemplo_Matriz_02();

    // teste de rotina com matrizes com tipos e dimensoes quaisquer
    array<array<int  , 5>, 2> m {{{{1,2,3,4,5}},{{6,7,8,9,10}}}};
    array<array<float, 2>, 3> n {{{{1.1,2.2}},{{3.3,4.4}},{{5.5,6.6}}}};

    cout << endl << endl << "Soma " << SomaMatriz(m);
    cout << endl << endl << "Soma " << SomaMatriz(n);

    array<float, 2> v;
    SomaMatrizPorColuna(n, v);
    cout << endl << endl << "Soma " << v[0] << " " << v[1];

    return 0;
}
