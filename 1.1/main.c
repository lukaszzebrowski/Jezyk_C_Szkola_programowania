#include <stdio.h>
#include <stdlib.h>

float cm=2.54;
float cale;

int main(void)
{

printf("Witaj w naszym przeliczniku cali na centymetry\n");
TUTAJ:
printf("Wpisz ponizej wartosc w calach a my zamienimy to na centymetry\n\
Wpisz 0 aby przejsc do konca\n");


scanf("%f",&cale);
float wynik=cm*cale;
if (wynik>0)
{
        printf("%.2f cm\n",wynik);
        goto TUTAJ;
}

    system("PAUSE");
    return 0;
}
