#include <iostream>

#include "Matrix2D.h"

using namespace std;

int main()
{
    unsigned int idxLin, idxCol, nLin, nCol;

    //-----------------------------------------------------------------
    Matrix2D<char>  mChar(3, 3);

    nLin = mChar.getNLin();
    nCol = mChar.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mChar.setElemento(idxLin, idxCol, (char)(65 + idxLin));

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mChar.getElemento(idxLin, idxCol) << endl;

    //-----------------------------------------------------------------
    Matrix2D<char*>  mCharp(3, 3);

    nLin = mCharp.getNLin();
    nCol = mCharp.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mCharp.setElemento(idxLin, idxCol, new char(97 + idxLin));

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << *((char*) mCharp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mCharp.getElemento(idxLin, idxCol);

    //-----------------------------------------------------------------
    Matrix2D<int>   mInt(5, 5);

    nLin = mInt.getNLin();
    nCol = mInt.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mInt.setElemento(idxLin, idxCol, idxLin);


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mInt.getElemento(idxLin, idxCol) << endl;

    //-----------------------------------------------------------------
    Matrix2D<int*>   mIntp(5, 5);

    nLin = mInt.getNLin();
    nCol = mInt.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mIntp.setElemento(idxLin, idxCol, new int(idxLin));


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << *(mIntp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mIntp.getElemento(idxLin, idxCol);

    //-----------------------------------------------------------------
    Matrix2D<float> mFloat(6, 6);

    nLin = mFloat.getNLin();
    nCol = mFloat.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mFloat.setElemento(idxLin, idxCol, idxLin/10.0f);


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
        cout << mFloat.getElemento(idxLin, idxCol) << endl;

    //-----------------------------------------------------------------
    Matrix2D<float*> mFloatp(6, 6);

    nLin = mFloat.getNLin();
    nCol = mFloat.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mFloatp.setElemento(idxLin, idxCol, new float(idxLin/10.0));


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
        cout << *(mFloatp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mFloatp.getElemento(idxLin, idxCol);

    return 0;
}
