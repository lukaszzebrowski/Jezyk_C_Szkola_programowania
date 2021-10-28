#include <stdio.h>
#include <stdlib.h>

double rok=3.156*1e7;
int wiek;
int wynik;

int main()
{
    printf("Ile masz lat?\n");
    scanf("%d",&wiek);
    wynik=rok*wiek;
    printf("Twoj wiek w sekundach to: %d\n",wynik);
    return 0;
}
