#include <iostream>
#include <iterator>
#include <string>

#include "Produtos.h"
#include "Produto.h"

using namespace std;

void Produtos::criarProdutos(){
    Produto P;
    _lista_produtos.push_back(P);
}

void Produtos::incluirProdutos(Produto P){
    _lista_produtos.push_back(P);
}

void Produtos::listProdutos(){
    for( _it = _lista_produtos.begin(); _it != _lista_produtos.end(); ++_it){
        cout<<"Descrição: "<<(*_it).getDescricao()<<endl;
        cout<<"Quantidade: "<<(*_it).getQuantidade()<<endl;
        cout<<"Preço: "<<(*_it).getPreco()<<endl;
        cout<<"Código: "<<(*_it).getCodigo()<<endl<<endl;
    }
}

Produto* Produtos::searchProduto(int x){
    for( _it = _lista_produtos.begin(); _it != _lista_produtos.end(); ++_it){
        if((*_it).getCodigo()==x){
            return &(*_it);
        }
    }
    return NULL;
}

void Produtos::attQuantd(int codigo,int quantidade){
    searchProduto(codigo)->setQuantidade(quantidade);
}

void Produtos::deletProduto(int codigo){
    for( _it = _lista_produtos.begin(); _it != _lista_produtos.end(); ++_it){
        if((*_it).getCodigo()== codigo){
            _it = _lista_produtos.erase(_it);
        }
    }
}

Produto* Produtos::getProduto(int index){
    _it = _lista_produtos.begin();
    advance(_it, index);
    return &(*_it);
}
