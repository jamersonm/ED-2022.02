#include <stdlib.h>
#include <type_traits>
#include <iostream>

#ifndef ARRAY_H
#define ARRAY_H

using namespace std;

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
        T getSomaPonteiros()
        {
            T soma;
            /*if(is_arithmetic<int>::value==true||is_arithmetic<float>::value==true)
            {
                if(is_arithmetic<char>::value==true){
                soma=0;
                for(int i=0; i< getSize(); i++)
                    soma = soma + (float)ptrVetorElementos[i];
                }
            return soma;
            }
            else{*/
            *soma = 0;
            for(int i=0; i< getSize(); i++)
                *soma = *soma + (float)*ptrVetorElementos[i];
                //cout << "Endereço de soma: " << soma << endl << "Conteúdo de soma: " << *soma << endl;
            return soma;
        }

        T getSoma()
        {
            T soma;
            soma=0;
            for(int i=0; i< getSize(); i++)
                soma = soma + (float)ptrVetorElementos[i];

            return soma;
        }

        T getProdutoPonteiros()
        {
            T produto;
            /*if(is_arithmetic<int>::value==true||is_arithmetic<float>::value==true)
            {
                if(is_arithmetic<char>::value==true){
                produto=0;
                for(int i=0; i< getSize(); i++)
                    produto = produto + (float)ptrVetorElementos[i];
                }
            return produto;
            }
            else{*/
            *produto=0;
            for(int i=0; i< getSize(); i++)
                *produto = *produto * (float)*ptrVetorElementos[i];
                //cout << "Endereço de produto: " << produto << endl << "Conteúdo de produto: " << *produto << endl;
            return produto;
        }

        T getProduto()
        {
            T produto;
            produto=0;
            for(int i=0; i< getSize(); i++)
                produto = produto * (float)ptrVetorElementos[i];

            return produto;
        }

        T getProdutoKPonteiro()
        {
            T produtoK
            *produtoK=0;
            for(int i=0; i< getSize(); i++)
                (float)*ptrVetorElementos[i] = (float)*ptrVetorElementos[i] * *produtoK;
                //cout << "Endereço de produto: " << produto << endl << "Conteúdo de produto: " << *produto << endl;
            return produto;

        }

        T getProdutoK()
        {
            T produtoK;
            produtoK=0;
            for(int i=0; i< getSize(); i++)
                (float)*setElemento[i]=getElemento[i]produtoK;
            return

        }
};

#endif // ARRAY_H
