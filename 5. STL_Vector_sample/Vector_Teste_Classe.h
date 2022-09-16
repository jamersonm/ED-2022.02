#ifndef VECTOR_TESTE_CLASSE_H_INCLUDED
#define VECTOR_TESTE_CLASSE_H_INCLUDED

#include <iostream>
#include <vector>

#include <algorithm>    // sort, max_element, random_shuffle, remove_if, lower_bound
#include <iterator>     //begin, end, cbegin, cend, distance

using namespace std;

class ClasseInteiro
{
    private:
        int val_;
    public:
        ClasseInteiro():val_(0){}
        ClasseInteiro(int val):val_(val){}
        int get()
        {
            return val_;
        }
        void set(int val)
        {
            val_=val;
        }

        bool operator<(const ClasseInteiro& b)
        {
            return this->val_ < b.val_;
        }
        bool operator==(const ClasseInteiro& b)
        {
            return this->val_ == b.val_;
        }
        bool operator>(const ClasseInteiro& b)
        {
            return this->val_ > b.val_;
        }
};

void Exemplo_Vector_08()
{
    cout << endl << "EXEMPLO 06 - Ordenacao - CORRETO" << endl << endl;

    vector<ClasseInteiro> v;
    ClasseInteiro p;

    for(int i=0; i<=100; i++)
        v.push_back(ClasseInteiro(i));

    cout << endl << endl << " interacao 01 com vector " << endl;
    for(int i=0; i<=100; i++)
        cout << v[i].get() << " ";

    random_shuffle(begin(v), end(v));
    cout << endl << endl << " interacao 02 com vector - embaralhado" << endl;
    for(int i=0; i<=100; i++)
        cout << v[i].get() << " ";

    sort(begin(v), end(v));

    cout << endl << endl << " interacao 03 com vector - ordenado - correto... valores inteiros" << endl;
    for(int i=0; i<=100; i++)
        cout << v[i].get() << " ";

    while( v.size() )
    {
//        p = (int *) v[v.size() -1];
        v.pop_back();
//        delete p;
    }
}

#endif // VECTOR_TESTE_CLASSE_H_INCLUDED
