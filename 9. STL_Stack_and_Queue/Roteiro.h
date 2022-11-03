#ifndef ROTEIRO_H_INCLUDED
#define ROTEIRO_H_INCLUDED

#include <stack>
#include <queue>
#include <string>

using namespace std;

class Roteiro{
private:
    stack<string> roteiro;   // rota a ser percorrida
    queue<string> relatorio; // todas as cidades por ordem de passagem
public:
    Roteiro();
    ~Roteiro();

    void roteiro_menu();

    void adicionar_destino();
    void remover_destino();
    void imprimir_roteiro();
    void relatorio_viagem();
};

#endif // ROTEIRO_H_INCLUDED
