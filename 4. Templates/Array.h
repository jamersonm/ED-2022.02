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
            T soma = 0;
            for(int i = 0; i < getSize(); i++)
                soma += getElemento(i);
            return soma;
        }
        //-----------------------------------------------------------------
        T getProduto()
        {
            T produto = 1;
            for(int i = 0; i < getSize(); i++)
                produto *= getElemento(i);
            return produto;
        }
        //-----------------------------------------------------------------
        void multiplicaK()
        {
            T K;
            std::cout << "Informe o valor de K: ";
            std::cin >> K;
            for(int i = 0; i < getSize(); i++)
                setElemento(i, (getElemento(i)*K));
        }
};

#endif // ARRAY_H
