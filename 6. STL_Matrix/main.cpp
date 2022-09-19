#include <iostream>
#include <array>
#include "Matriz_Array.h"

using namespace std;

int main()
{
    array<array<int, 3>, 3> m1;
    inputMatriz(m1);
    outputMatriz(m1);
    dadosMatriz(m1);
    MultKMatriz(m1);
    return 0;
}
