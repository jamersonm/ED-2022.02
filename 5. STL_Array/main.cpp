#include <iostream>
#include "STL_Array.h"

using namespace std;

int main()
{
    cout << "------------- INT -------------" << endl;
    array<int  , 4> vInt {1,2,3,4};
    cout << endl << "Valores do vetor: " ;
    ExibirVetor(vInt);
    cout << endl << "Soma: " << SomaVetor(vInt) << endl;
    cout << "Multiplicação: " << MultiplicaVetor(vInt) << endl;
    KVetor(vInt);
    cout << "Vetor multiplicado por K: ";
    ExibirVetor(vInt);

    cout << endl << endl << "------------- FLOAT -------------" << endl;
    array<float  , 4> vFloat {0.1,0.2,0.3,0.4};
    cout << endl << "Valores do vetor: " ;
    ExibirVetor(vFloat);
    cout << endl << "Soma: " << SomaVetor(vFloat) << endl;
    cout << "Multiplicação: " << MultiplicaVetor(vFloat) << endl;
    KVetor(vFloat);
    cout << "Vetor multiplicado por K: ";
    ExibirVetor(vFloat);

    return 0;
}
