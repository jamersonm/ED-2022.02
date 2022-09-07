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

    cout << "Soma: " << (int)vChar.getSoma() << endl;
    cout << "Produto: " << (int)vChar.getProduto() << endl;

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

    cout << "Soma: " << (int)*vCharPointer.getSomaPonteiro() << endl;
    cout << "Produto: " << (int)*vCharPointer.getProdutoPonteiro() << endl;

    for(int i=0; i<tamanho; i++)
        delete vCharPointer.getElemento(i);

    //-----------------------------------------------------------------
     Array<int>   vInt(5);

    tamanho = vInt.getSize();
    for(int i=0; i<tamanho; i++)
        vInt.setElemento(i, i);

    for(int i=0; i<tamanho; i++)
        cout << vInt.getElemento(i) << endl;

    cout << "Soma: " << vInt.getSoma() << endl;
    cout << "Produto: " << vInt.getProduto() << endl;
    vInt.multiplicarK((int) 2);
    cout << "Soma depois da multiplicação: " << vInt.getSoma() << endl;
    cout << "Produto depois da multiplicação: " << vInt.getProduto() << endl;
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

    cout << "Soma: " << *vIntPointer.getSomaPonteiro() << endl;
    cout << "Produto: " << *vIntPointer.getProdutoPonteiro() << endl;
    vIntPointer.multiplicarKPonteiro(new int(2));
    cout << "Soma depois da multiplicação: " << *vIntPointer.getSomaPonteiro() << endl;
    cout << "Produto depois da multiplicação: " << *vIntPointer.getProdutoPonteiro() << endl;

    for(int i=0; i<tamanho; i++)
        delete vIntPointer.getElemento(i);
    //-----------------------------------------------------------------
    Array<float> vFloat(6);

    tamanho = vFloat.getSize();
    for(int i=0; i<tamanho; i++)
        vFloat.setElemento(i, i/10.0f);

    for(int i=0; i<tamanho; i++)
        cout << vFloat.getElemento(i) << endl;

    cout << "Soma: " << vFloat.getSoma() << endl;
    cout << "Produto: " << vFloat.getProduto() << endl;
    vFloat.multiplicarK((int) 2);
    cout << "Soma depois da multiplicação: " << vFloat.getSoma() << endl;
    cout << "Produto depois da multiplicação: " << vFloat.getProduto() << endl;
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

    cout << "Soma: " << *vFloatPointer.getSomaPonteiro() << endl;
    cout << "Produto: " << *vFloatPointer.getProdutoPonteiro() << endl;
    vFloatPointer.multiplicarKPonteiro(new float (2));
    cout << "Soma depois da multiplicação: " << *vFloatPointer.getSomaPonteiro() << endl;
    cout << "Produto depois da multiplicação: " << *vFloatPointer.getProdutoPonteiro() << endl;

    for(int i=0; i<tamanho; i++)
        delete vFloatPointer.getElemento(i);

    //-----------
    return 0;
}
