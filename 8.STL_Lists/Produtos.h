#ifndef PRODUTOS_H_INCLUDED
#define PRODUTOS_H_INCLUDED

#include <list>
#include <string>
#include <iterator>

#include "Produto.h"

class Produtos{
private:
    list<Produto> _lista_produtos;
    list<Produto>::iterator _it;

public:
    Produtos(){}
    ~Produtos(){}

    void criarProdutos();
    void incluirProdutos(Produto);
    void attQuantd(int,int);
    void listProdutos();
    void deletProduto(int);
    void deletSystem(){exit(0);}

    Produto* getProduto(int);
    Produto* searchProduto(int);
};


#endif // PRODUTOS_H_INCLUDED
