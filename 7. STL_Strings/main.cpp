#include <iostream>
#include <string>

#include "STL_Strings.h"

using namespace std;

int main()
{
    string str1("Cachorro");
    cout << "Número de caracteres contidos: " << str1.size() <<  endl;
    cout << "Posição da primeira ocorrência de \'ch\': " << str1.find("ch") << endl;

    string str2;
    str2.swap(str1);
    cout << "Str2 copiada de str1: " << str2 << endl;
    InverteString(str2);
    cout << "Str2 invertida: " << str2 << endl;

    string str3("amanha tem jogo");
    cout << "Str3: " << str3 << endl;
    AlteraIniciaisMaiusculas(str3);
    cout << "Str3 com as primeiras letras maiúsculas: " << str3 << endl;
    string str4("AMANHA TEM JOGO");
    cout << "Str4: " << str3 << endl;
    MinusculaMaiuscula(str4);
    cout << "Str4 com apenas as primeiras letras maiúsculas: " << str3 << endl;


    str1 = "Cachorro";
    cocatenar(str1, str2);
    cout << "Str1 cocatenada a str2: " << str1 << endl;

    string str5("cinco");
    string str6("seis");
    string str7;
    IntercalaStrings(str5, str6, str7);
    cout << "Intercalação entre str5 e str6: " << str7 << endl;

    if(comparaStrings(str2, str1) == 0)
        cout << "Str1 é igual a str2." << endl;
    else if(comparaStrings(str1,  str2) < 0)
        cout << "Str1 é maior do que str2." << endl;
    else
        cout << "Str1 é menor do que str2." << endl;
    return 0;
}
