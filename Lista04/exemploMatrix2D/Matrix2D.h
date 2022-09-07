#include <stdlib.h>

#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix2D
{
    protected:
        T** ptrMatrixElementos;
        unsigned int nLin, nCol;

    private:
        void init(unsigned nLin=1, unsigned nCol=1, T defaultValue = NULL)
        {
            unsigned int idxLin, idxCol;

            this->nLin = nLin;
            this->nCol = nCol;

            // aloca referencias para as linhas
            this->ptrMatrixElementos = new T*[this->nLin];

            // aloca referencias para os elementos
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                this->ptrMatrixElementos[idxLin] = new T[this->nCol];

            // seta NULL para as referencias para os elementos
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                for(idxCol=0; idxCol<this->nCol; idxCol++)
                    this->ptrMatrixElementos[idxLin][idxCol] = NULL;
        }
    public:
        //-----------------------------------------------------------------
        Matrix2D()
        {
            init(5, 5);
        }
        //-----------------------------------------------------------------
        Matrix2D(unsigned int _nLin, unsigned int _nCol)
        {
            this->init(_nLin, _nCol);
        }
        //-----------------------------------------------------------------
        ~Matrix2D()
        {
            unsigned int idxLin, idxCol;

            // libera as linhas
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                delete []this->ptrMatrixElementos[idxLin];

            // libera o array de linhas
            delete []this->ptrMatrixElementos;

            this->nLin = 0;
            this->nCol = 0;

            this->ptrMatrixElementos = NULL;
        }

        //-----------------------------------------------------------------
        T getElemento(unsigned int idxLin, unsigned int idxCol)
        {
            if (idxLin >= this->nLin || idxCol >= this->nCol)
                return NULL;

            return this->ptrMatrixElementos[idxLin][idxCol];
        }

        //-----------------------------------------------------------------
        unsigned int setElemento(unsigned int idxLin, unsigned int idxCol, T ptrElemento)
        {
            if (idxLin >= this->nLin || idxCol >= this->nCol)
                return 0;

            this->ptrMatrixElementos[idxLin][idxCol] = ptrElemento;

            return +1;
        }

        //-----------------------------------------------------------------
        unsigned int getNLin()
        {
            return this->nLin;
        }

        //-----------------------------------------------------------------
        unsigned int getNCol()
        {
            return this->nCol;
        }
};

#endif // MATRIX_H