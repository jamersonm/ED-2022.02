#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strlen(const char *str){
    for(int i=0;str[i]!='\0';i++)
        ;
    return i;
}

char *strchr(const char *str, intch){
    int i=0;
    while(str[i]!='\0')
    {
        if (str[i] == intch)
            return i;

        i++;
    }
    return NULL;
}

char *strcpy(char *str1, const char *str2){
    int i;
    for (i = 0; str2[i] != '\0'; ++i)
      str1[i] = str2[i];

    str1[i] = '\0';

    return *str1;
}

int EscreveStringInvertida(char *str){
    printf("String Invertida: %s",InverteString(str);
}

int InverteString(char *str){
    char aux;
    int i, j;

    for(i=strlen_(s)-1,j=0; i>j; i--,j++)
    {
        aux  = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
    return 0;
}

int AlteraIniciaisMaiusculas(char *str){
    int i=0;
    while (str[i]<1){
        str[i]=toupper(str[i]);
        i++;
    }
    str[i]='\0';
}

int AlteraIniciaisMinusculas(char *str){
    int i=0;
    while (str[i]<1){
        str[i]=tolower(str[i]);
        i++;
    }
    str[i]='\0';
}
char *strcat(char *str1, const char *str2){
    char* ptr = str1 + strlen(str1);

    while (str2 != '\0') {
        *ptr++ = str2++;
    }

    *ptr = '\0';

    return str1;
}

int IntercalaStrings(char *s1, char *s2, char *sFinal){

}

int strcmp(const char *str1, const char *str2){
    int i;
    unsigned char usi, uti;

    for (i=0; str1[i]==str2[i]; ++i)
        if (str1[i] == '\0')
            break;

    usi = str1[i];
    uti = str2[i];

    if(usi<uti)
        return -1;
    if(usi==uti)
        return 0;
    if(usi>uti)
        return 1;
}




#endif // STRING_H_INCLUDED
