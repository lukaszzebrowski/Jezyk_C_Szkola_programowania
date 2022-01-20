#include <stdio.h>
 void potega3 (float n);

int main()
{
    float liczba;

    printf("Podaj liczbe zmiennoprzecinkowa, a my podniesiemy ja do szescianu:\n");
    scanf("%f)",&liczba);

    potega3 (liczba);
    
    return 0;
    
}
void potega3 (float n)
{
     float wynik;
     wynik=n*n*n;
     printf("szescian liczby %.2f wynosi: %.2f",n,wynik);

}