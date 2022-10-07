#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

#define VALOR 25

int main()
{
    char str1[VALOR],str2[VALOR];

    printf("%d",strlen_(str1));
    printf("%d",strlen_(str2));

    printf("%s",strchr(str1,""));

    printf("%s",strcpy(str1, "Arthur Henrique"));

    strcpy(str2, "Jamerson Muniz");

    EscreveStringInvertida(str1);

    printf("%s", str1);
    printf("%s", AlteraIniciaisMaiusculas(str1));
    printf("%s", AlteraIniciaisMinusculas(str1));

    printf("%s",str1);
    printf("%s",str2);

    printf("%s",strcat(str1,str2));

    printf("%s", str1);
    printf("%s", str2);

    printf("%s", IntercalaStrings(str1,str2,""));

    printf("%d", strcmp(str1,str2));

    return 0;
}
