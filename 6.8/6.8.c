#include <stdio.h>
float wynik (float a, float b);

int main()
{
float a, b;
printf("Podaj dwie liczby zmiennoprzecinkowe:\n");
while (scanf("%f %f",&a, &b)==2)
{    

    printf("%f\n", wynik(a,b));
    printf("Podaj dwie nastepne liczby:\n");
}
    return 0;
}
float wynik (float a, float b)
{
    float wynik;
    wynik=(a=b)/(a*b);
    return wynik;
}