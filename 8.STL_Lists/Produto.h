#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Produto{
private:
    int _codigo;
    string _descricao;
    int _quantidade;
    float _preco;

public:
    Produto(){cadastrarProduto();}
    ~Produto(){}

    void setCodigo(int a){_codigo=a;}
    int getCodigo(){return _codigo;}

    void setDescricao(string a){_descricao=a;}
    string getDescricao(){return _descricao;}

    void setQuantidade(int a){_quantidade=a;}
    int getQuantidade(){return _quantidade;}

    void setPreco(float a){_preco=a;}
    float getPreco(){return _preco;}

    void cadastrarProduto();

    void incluirProduto(Produto P);

    void excluirProduto(){Produto::~Produto;}

};

#endif // PRODUTO_H_INCLUDED
