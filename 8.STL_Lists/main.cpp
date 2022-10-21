#include <iostream>

#include "Produto.h"
#include "Produtos.h"

using namespace std;

int main()
{
    Produtos lista; // criando uma lista de produtos

    Produto p1; // criando um produto P1 fora da lista

    cout << endl << endl;
    cout << "Lista vazia." << endl;

    lista.listProdutos(); //exibir lista vazia

    lista.incluirProdutos(p1); //adicionando o produto p1 na lista

    cout << endl << endl;
    cout << "Lista com p1." << endl;

    lista.listProdutos(); //exibir lista com p1

    lista.criarProdutos(); //criar um produto e adiocioná-lo automaticamente na lista

    cout << endl << endl;
    cout << "Lista com p1 e p2." << endl;

    lista.listProdutos(); //exibir os dois produtos da lista

    lista.attQuantd(p1.getCodigo(), 2); //atualizando a quantidade do produto p1 para 2

    cout << endl << endl;
    cout << "Lista com a quatidade de p1 alterada e p2." << endl;

    lista.listProdutos();

    lista.deletProduto(p1.getCodigo()); // excluindo o produto p1 da lista

    cout << endl << endl;
    cout << "Lista p2. P1 deletado" << endl;

    lista.listProdutos();

    lista.deletProduto(lista.getProduto(0)->getCodigo()); // excluindo o primeiro produto da lista

    cout << endl << endl;
    cout << "Lista vazia." << endl;

    lista.listProdutos();
    return 0;
}
