#ifndef STL_STRINGS_H_INCLUDED
#define STL_STRINGS_H_INCLUDED

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int QuantCaract(string str){
    int i;
    i=str.size();
    return i;
}

char *FoundCh(string str){
    int s;
    s= (signed int) str.find("ch");
    //if(s<25){
        //return s;
    //}
    return NULL;
}

char *Copia(string *str1,string *str2){
    str2=str1;
    return str1;
}










#endif // STL_STRINGS_H_INCLUDED
