#ifndef STL_MATRIZ_TESTE_H_INCLUDED
#define STL_MATRIZ_TESTE_H_INCLUDED

#include "STL_Matriz.h"

void Exemplo_Matriz_01()
{
    array<array<char , 3>, 5> mChar;
    array<array<int  , 5>, 2> mInt;
    array<array<float, 6>, 3> mFloat;

    //-----------------------------------------------------------------
    unsigned int i, j;
    for(i=0; i<mChar.size(); i++)
        for(j=0; j<mChar[i].size(); j++)
            mChar[i][j] = 'A';

    for(i=0; i<mChar.size(); i++)
    {
        cout << endl;

        for(j=0; j<mChar[i].size(); j++)
            cout << mChar.at(i).at(j) << ' ';
    }

    //-----------------------------------------------------------------
    for(i=0; i<mInt.size(); i++)
        for(j=0; j<mInt[i].size(); j++)
            mInt[i][j] = i;

    for(i=0; i<mInt.size(); i++)
    {
        cout << endl;

        for(j=0; j<mInt[i].size(); j++)
            cout << mInt.at(i).at(j) << ' ';
    }


    //-----------------------------------------------------------------
    for(i=0; i<mFloat.size(); i++)
        for(j=0; j<mFloat[i].size(); j++)
            mFloat[i][j] = (float) i/10.0;

    for(i=0; i<mFloat.size(); i++)
    {
        cout << endl;

        for(j=0; j<mFloat[i].size(); j++)
            cout << mFloat.at(i).at(j) << ' ';
    }
}

void Exemplo_Matriz_02()
{
    array<array<char* , 3>, 5> mChar;
    array<array<int*  , 5>, 2> mInt;
    array<array<float*, 6>, 3> mFloat;

    //-----------------------------------------------------------------
    unsigned int i, j;
    for(i=0; i<mChar.size(); i++)
        for(j=0; j<mChar[i].size(); j++)
            mChar[i][j] = new char('A');;

    for(i=0; i<mChar.size(); i++)
    {
        cout << endl;

        for(j=0; j<mChar[i].size(); j++)
        {
            cout << *((char *) mChar[i][j]) << ' ';
            delete mChar[i][j];
        }
    }

    //-----------------------------------------------------------------
    for(i=0; i<mInt.size(); i++)
        for(j=0; j<mInt[i].size(); j++)
            mInt[i][j] = new int(i);

    for(i=0; i<mInt.size(); i++)
    {
        cout << endl;

        for(j=0; j<mInt[i].size(); j++)
        {
            cout << *((int *) mInt[i][j]) << ' ';
            delete mInt[i][j];
        }
    }

    //-----------------------------------------------------------------
    for(i=0; i<mFloat.size(); i++)
        for(j=0; j<mFloat[i].size(); j++)
            mFloat[i][j] = new float((float) i/10.0);

    for(i=0; i<mFloat.size(); i++)
    {
        cout << endl;

        for(j=0; j<mFloat[i].size(); j++)
        {
            cout << *((float *) mFloat[i][j]) << ' ';
            delete mFloat[i][j];
        }
    }
}

#endif // STL_MATRIZ_TESTE_H_INCLUDED
