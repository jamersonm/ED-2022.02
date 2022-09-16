#include <iostream>
#include "Array.h"
#include "Matrix2D.h"

using namespace std;

int main()
{
    cout << "----------- ARRAY -----------" << endl << endl;
    int tamanho;
    //-----------------------------------------------------------------
    /*Array<char>  vChar(3);

    tamanho = vChar.getSize();
    for(int i=0; i<tamanho; i++)
        vChar.setElemento(i, (char)(65 + i));

    cout << "Vetor de caracteres: ";
    for(int i=0; i<tamanho; i++)
         cout << vChar.getElemento(i) << " ";
    cout << endl << "Soma: " << vChar.getSoma();
    cout << endl << "Produto: " << vChar.getProduto();*/
    //-----------------------------------------------------------------             Para mudar o tipo basta alterar na declaração do Array
    Array<int>  vInt(5);

    tamanho = vInt.getSize();
    for(int i=0; i<tamanho; i++)
        vInt.setElemento(i, (i+1));

    cout << endl << "Vetor de inteiros: ";
    for(int i=0; i<tamanho; i++)
        cout << vInt.getElemento(i) << " ";
    cout << endl << "Soma: " << vInt.getSoma();                                  //Soma
    cout << endl << "Produto: " << vInt.getProduto() << endl;                    //Produto
    vInt.multiplicaK();                                                          //Multiplica por K
    cout << "Vetor de inteiros multiplicado por K: ";
    for(int i=0; i<tamanho; i++)
        cout << vInt.getElemento(i) << " ";
    //-----------------------------------------------------------------
    /*Array<float>  vFloat(7);

    tamanho = vFloat.getSize();
    for(int i=0; i<tamanho; i++)
        vFloat.setElemento(i, (float)(i+1)/10);

    cout << endl << endl << "Vetor de decimais: ";
    for(int i=0; i<tamanho; i++)
        cout << vFloat.getElemento(i) << " ";
    cout << endl << "Soma: " << vFloat.getSoma();
    cout << endl << "Produto: " << vFloat.getProduto();
    vFloat.multiplicaK();
    cout << "Vetor de decimais multiplicado por K: ";
    for(int i=0; i<tamanho; i++)
        cout << vFloat.getElemento(i) << " ";*/
    //-----------------------------------------------------------------             Para mudar o tipo basta alterar na declaração da Matrix2D

    cout << endl << endl << "----------- MATRIZ -----------" << endl << endl;
    unsigned int idxLin, idxCol, nLin, nCol;
    //-----------------------------------------------------------------
    Matrix2D<int>   mInt(5, 5);

    nLin = mInt.getNLin();
    nCol = mInt.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mInt.setElemento(idxLin, idxCol, idxLin);

    cout << "Matriz de inteiros: " << endl;
    for(idxLin=0; idxLin<nLin; idxLin++)
    {
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mInt.getElemento(idxLin, idxCol) << " ";
        cout << endl;
    }
    cout << endl << "Soma: " << mInt.getSoma();                                  //Soma
    cout << endl << "Produto: " << mInt.getProduto() << endl;                    //Produto
    mInt.multiplicaK();                                                          //Multiplica por K
    cout << "Matriz de inteiros multiplicado por K: " << endl;
    for(idxLin=0; idxLin<nLin; idxLin++)
    {
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mInt.getElemento(idxLin, idxCol) << " ";
        cout << endl;
    }
    cout << "Matriz nula: " << mInt.verificaNula() << endl;                      //Nula
    cout << "Matriz diagonal: " << mInt.verificaDiagonal() << endl;              //Diagonal
    cout << "Matriz identidade: " << mInt.verificaIdentidade() << endl;          //Identidade
    cout << "Matriz escalar: " << mInt.verificaEscalar() << endl;                //Escalar
    cout << "Matriz simetrica: " << mInt.verificaSimetrica() << endl;            //Simetrica
    cout << "Matriz anti-simetrica: " << mInt.verificaAntiSimetrica() << endl;   //Anti-simetrica
    //-----------------------------------------------------------------
    cout << endl;
    return 0;
}
