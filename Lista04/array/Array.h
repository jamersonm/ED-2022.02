#include <stdlib.h>

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
    protected:
        T* ptrVetorElementos;
        unsigned int tamanho;
    private:

    public:
        //-----------------------------------------------------------------
        Array()
        {
            this->tamanho = 5;
            this->ptrVetorElementos = new T [this->tamanho];
        }
        //-----------------------------------------------------------------
        Array(unsigned int _tamanho)
        {
            this->tamanho = _tamanho;
            this->ptrVetorElementos = new T [this->tamanho];
        }
        //-----------------------------------------------------------------
        ~Array()
        {
            delete []this->ptrVetorElementos;
        }
        //-----------------------------------------------------------------
        T getElemento(unsigned int idxElemento)
        {
            if (idxElemento>=this->tamanho)
                return NULL;

            return this->ptrVetorElementos[idxElemento];
        }
        //-----------------------------------------------------------------
        int setElemento(unsigned int idxElemento, T ptrElemento)
        {
            if (idxElemento>=this->tamanho)
                return -1;

            this->ptrVetorElementos[idxElemento] = ptrElemento;

            return +1;
        }
        //-----------------------------------------------------------------
        int getSize()
        {
            return this->tamanho;
        }
        //-----------------------------------------------------------------
        T getSoma()
        {
            T soma;
            soma = 0;
            for(int i = 0; i < getSize(); i++)
            {
                soma = soma + getElemento(i);
            }
            return soma;
        }
        T getSomaPonteiro()
        {
            T soma;
            *soma = 0;
            for(int i = 0; i < getSize(); i++)
            {
                *soma = *soma + (float)*getElemento(i);
            }
            return soma;
        }
        //-----------------------------------------------------------------
        T getProduto()
        {
            T produto;
            produto = 1;
            for(int i = 0; i < getSize(); i++)
            {
                produto = produto * getElemento(i);
            }
            return produto;
        }
        T getProdutoPonteiro()
        {
            T produto;
            *produto = 1;
            for(int i = 0; i < getSize(); i++)
            {
                *produto = *produto * (float)*getElemento(i);
            }
            return produto;
        }
        //-----------------------------------------------------------------
        void multiplicarK(T K)
        {
            T aux;
            for(int i = 0; i < getSize(); i++)
            {
                aux = getElemento(i) * K;
                setElemento(i, aux);
            }
        }
        void multiplicarKPonteiro(T K)
        {
            T aux;
            for(int i = 0; i < getSize(); i++)
            {
            }
        }
};

#endif // ARRAY_H
