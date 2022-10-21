#include <iostream>
#include <string>

#include "Produto.h"

using namespace std;

void Produto::cadastrarProduto(){
    cout<<"Código: ";
    cin>>_codigo;
    fflush(stdin);

    cout<<"Descrição: ";
    getline(cin,_descricao);

    cout<<"Quantidade: ";
    cin>>_quantidade;
    fflush(stdin);

    cout<<"Preço: ";
    cin>>_preco;
    fflush(stdin);
}



