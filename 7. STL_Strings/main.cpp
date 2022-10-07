#include <iostream>
#include <string>

#include "STL_Strings.h"

using namespace std;

int main()
{
    string str1,str2,s;
    s="Arthur";

    cout<<"Informe o conjunto de caracteres 1: "<<endl;
    cin>>str1;

    cout<<"Informe o conjunto de caracteres 2: "<<endl;
    cin>>str2;

    cout<<" "<<QuantCaract(s)<<endl;
    cout<<" "<<QuantCaract(s)<<endl;

    cout<<"Posição de ch na string: "<<FoundCh(s)<<endl;

    cout << "localizacao do primeiro caracter \'a\' " << s.find('A') << endl;
    cout << "localizacao do primeiro caracter \'s\' " << s.find('r') << endl;


    return 0;
}
