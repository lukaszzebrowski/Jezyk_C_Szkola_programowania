#include <stdio.h>
#include <stdlib.h>

float x;

int main()
{
    printf("Wpisz liczbe zmiennoprzecinkowa\n");
    scanf("%f",&x);
    printf("Twoja liczba to: %.6f lub %e",x,x);
    system ("PAUSE");
    return 0;
}
