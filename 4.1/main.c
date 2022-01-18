#include <stdio.h>
#include <stdlib.h>
char imie[20];
char nazwisko[20];
int main(void)
{
    printf("Wpisz imie\n");
    scanf("%s",&imie);
    printf("Wpisz nazwisko\n");
    scanf("%s",&nazwisko);
    printf("A wiec nazywasz sie %s %s",nazwisko, imie);
    return 0;
}
