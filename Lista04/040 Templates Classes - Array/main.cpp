#include <iostream>

#include "Array.h"

using namespace std;

int main()
{
    int tamanho;

    //-----------------------------------------------------------------
    Array<char>  vChar(3);

    tamanho = vChar.getSize();
    for(int i=0; i<tamanho; i++)
        vChar.setElemento(i, (char)(65 + i));

    for(int i=0; i<tamanho; i++)
        cout << vChar.getElemento(i) << endl;

    //cout << (int)vChar.getSoma() << endl;
    //-----------------------------------------------------------------
    Array<char*>  vCharPointer(3);

    tamanho = vCharPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vCharPointer.setElemento(i, new char(65 + i));

    for(int i=0; i<tamanho; i++)
    {
        cout << "Pointer : " << (void*)vCharPointer.getElemento(i) << endl;
        cout << "char    : " << *vCharPointer.getElemento(i) << endl;
    }
    cout << "Retorno da função (Soma ponteiro char): " << (int)*(vCharPointer.getSomaPonteiros()) << endl;
    cout << "Retorno da função (Produto ponteiro char): " << (int)*(vCharPointer.getProdutoPonteiros()) << endl;


    for(int i=0; i<tamanho; i++)
        delete vCharPointer.getElemento(i);

    //-----------------------------------------------------------------
     Array<int>   vInt(5);

    tamanho = vInt.getSize();
    for(int i=0; i<tamanho; i++)
        vInt.setElemento(i, i);

    for(int i=0; i<tamanho; i++)
        cout << vInt.getElemento(i) << endl;

    //cout << vInt.getSoma() << endl;

    //-----------------------------------------------------------------
     Array<int*>   vIntPointer(5);

    tamanho = vIntPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vIntPointer.setElemento(i, new int(i));

    for(int i=0; i<tamanho; i++)
    {
        cout << "Pointer: " << vIntPointer.getElemento(i) << endl;
        cout << "int    : " << *(vIntPointer.getElemento(i)) << endl;
    }


    cout << "Retorno da função (Soma ponteiro int) : " << *(vIntPointer.getSomaPonteiros()) << endl;
    cout << "Retorno da função (Produto ponteiro int) : " << *(vIntPointer.getProdutoPonteiros()) << endl;

    for(int i=0; i<tamanho; i++)
        delete vIntPointer.getElemento(i);
    //-----------------------------------------------------------------
    Array<float> vFloat(6);

    tamanho = vFloat.getSize();
    for(int i=0; i<tamanho; i++)
        vFloat.setElemento(i, i/10.0f);

    for(int i=0; i<tamanho; i++)
        cout << vFloat.getElemento(i) << endl;

    cout << "Retorno da função (Soma float) : " << vFloat.getSoma() << endl;
    cout << "Retorno da função (Produto float) : " << vFloat.getProduto() << endl;

    //-----------------------------------------------------------------
    Array<float*> vFloatPointer(6);

    tamanho = vFloatPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vFloatPointer.setElemento(i, new float(i/10.0f));

    for(int i=0; i<tamanho; i++)
    {
        cout<< "Pointer: " << vFloatPointer.getElemento(i) << endl;
        cout <<"float  : " << *(vFloatPointer.getElemento(i)) << endl;
    }

    cout << "Retorno da função (Soma ponteiro float) : " << *(vFloatPointer.getSomaPonteiros()) << endl;
    cout << "Retorno da função (Produto ponteiro float) : " << *(vFloatPointer.getProdutoPonteiros()) << endl;

    for(int i=0; i<tamanho; i++)
        delete vFloatPointer.getElemento(i);



    //-----------
    return 0;
}
