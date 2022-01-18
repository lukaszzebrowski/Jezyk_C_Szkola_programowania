
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char imie[40];
    int a;
    printf("Wprowadz swoje imie: \n");
    scanf("%s", imie);
    printf("\"%20s\"\n", imie);
    printf("\"%-20s\"\n", imie);
    a = strlen(imie);
    printf("\"%*s\"\n", a+3, imie);
    return 0;}
