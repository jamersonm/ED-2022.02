#ifndef STL_STRINGS_H_INCLUDED
#define STL_STRINGS_H_INCLUDED

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void InverteString(string &str)
{
    for (int i = 0; i < (int)str.size() / 2; i++)
        swap(str[i], str[str.size() - i - 1]);
}

void AlteraIniciaisMaiusculas(string &str)
{
    str.at(0) = toupper(str.at(0));
    for(int i = 2; i < str.size(); i++)
    {
        if(str.at(i-1) == ' ')
            str.at(i) = toupper(str.at(i));
    }
}

void MinusculaMaiuscula(string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    AlteraIniciaisMaiusculas(str);
}

void cocatenar(string &str1, string &str2)
{
    str1 = str1 + str2;
}

int comparaStrings(string &str1, string &str2)
{
    return str1.compare(str2);
}

void IntercalaStrings(string &str1, string &str2, string &str3)
{
    int i = 0, j = 0, control = 0;
    if(comparaStrings(str1, str2) >= 0)
        str3 = str1 + str2;
    else
        str3 = str2 + str1;
    do
    {
        if(i % 2 == 0)
        {
            str3.at(i) = str1.at(j);
            j++;
        }
        i++;
        if(i == str3.size() || j == str2.size())
            control++;
    }
    while(j < str1.size());
    i = 0;
    j = 0;
    control = 0;
    do
    {
        if(i % 2 != 0)
        {
            str3.at(i) = str2.at(j);
            j++;
        }
        i++;
        if(i == str3.size() || j == str2.size())
            control++;
    }
    while(control == 0);

}









#endif // STL_STRINGS_H_INCLUDED
