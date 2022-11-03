#include <iostream>
#include <ios>
#include <limits>
#include <queue>
#include "Roteiro.h"

using namespace std;

Roteiro::Roteiro(){
    string leitura;
    cout << "------ ROTEIRO DO MANEL ------" << endl;
    cout << "Cidade de origem: ";
    getline(cin, leitura);                                  // cidade de origem
    roteiro.push(leitura);                                  // adicionado ao roteiro
    relatorio.push(leitura);                                // adicionado ao relatorio
    roteiro_menu();                                         // chamada do menu
}

Roteiro::~Roteiro(){
    relatorio_viagem();                                     // print relatório
}

void Roteiro::roteiro_menu(){
    int resp = 0;
    do{
        do{
            cout << endl << "1. Adicionar destino (ida)" << endl;
            cout << "2. Remover destino (voltar)" << endl;
            cout << "3. Imprimir roteiro" << endl;
            cout << "4. Sair" << endl;
            cin >> resp;
            cout << endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');          // limpando buffer
            if(resp <= 0 || resp > 4)
                cout << "Opção inválida" << endl;
        } while(resp <= 0 || resp > 4);
        switch(resp)
        {
        case 1:
            adicionar_destino();
            break;
        case 2:
            remover_destino();
            break;
        case 3:
            imprimir_roteiro();
            break;
        default:
            Roteiro::~Roteiro();
            break;
        }
    } while(resp != 4);
}

void Roteiro::adicionar_destino(){
    string leitura;
    cout << "Próximo destino: ";
    getline(cin, leitura);          // proximo destino
    roteiro.push(leitura);          // adicionado ao roteiro
    relatorio.push(leitura);        // adicionado ao relatorio
}

void Roteiro::remover_destino(){
    if(roteiro.empty())
    {
        cout << "Roteiro vazio" << endl;
    }
    string cidade = roteiro.top();
    cout << "Removendo cidade: " << cidade << endl;
    roteiro.pop();                                     // remover destino do roteiro (volta)
    if(relatorio.back() != cidade)
        relatorio.push(cidade);                        // impedir duplicidade no relatorio (proximo destino == cidade passada)
    else{
        if(roteiro.empty() == false)
            relatorio.push(roteiro.top());             // ao passar por uma cidade, voltar para a anterior no relatorio
    }
    if(roteiro.empty())
    {
        cout << "Rota concluída" << endl;
    }
}

void Roteiro::imprimir_roteiro(){
    queue<string> temp_queue;                     // fila com os destinos do roteiro para print
    stack<string> temp_stack;                     // duplicacao da stack de roteiro
    int index = 1;
    if(roteiro.empty())
    {
        cout << "Roteiro vazio" << endl;
        return;
    }
    while(roteiro.empty() == false)               // passar os valores do roteiro para a stack e queue temporarias
    {
        temp_queue.push(roteiro.top());
        temp_stack.push(roteiro.top());
        roteiro.pop();
    }
    while(temp_queue.empty() == false)
    {
        string cidade = temp_queue.front();
        cout << index << ". " << cidade << endl;    // LIFO print
        temp_queue.pop();
        cidade = temp_stack.top();                  // a stack duplicada passa os valores para a stack original
        temp_stack.pop();
        roteiro.push(cidade);                       // roteiro recebe seus valores originais de volta
        index++;
    }
}

void Roteiro::relatorio_viagem(){
    int index = 1;
    while(relatorio.empty() == false)
    {
        cout << index << ". " << relatorio.front() << endl;
        relatorio.pop();
        index++;
    }
}
