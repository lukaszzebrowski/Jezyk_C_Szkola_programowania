#include <stdio.h>
#include <stdlib.h>

int liczba;

void function(int a)
{
   printf("Liczba: %d\n",a);
   printf("Podwojona liczba: %d\n",2*a);
   printf("Kwadrat liczby: %d\n",a*a);
}

int main(void)
{
    Tutaj:
    printf("Wpisz liczbe (Wpisz '0' aby zakonczyc\n");
    scanf("%d",&liczba);

    function(liczba);
    if (liczba>0)
    {
        goto Tutaj;
    }
    system ("PAUSE");
    return 0;
}
