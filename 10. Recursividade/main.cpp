#include <iostream>
#include "Rotinas.h"

using namespace std;

int main()
{
    // somar os números inteiros menores que um inteiro N qualqer.
    cout << "6: " << somarInteiros(6) << endl << endl;

    //  calcular o quociente de uma divisão inteira subtraindo o dividendo pelo divisor
    cout << "308/8: " << divisaoInteiros(304, 8) << endl << endl;

    //  calcular o quociente de uma divisão inteira pelo método
    cout << "294/7: " << divisaoMetodo(294, 7) << endl << endl;

    //  calcular o quociente de uma divisão inteira pelo método
    cout << "10/4: " << restoDivisao(10, 4) << endl << endl;

    return 0;
}
