#include <stdio.h>
#include <string.h>
int main()
{
float a;

printf("Podaj liczbe zmiennoprzecinkowa:\n");
scanf("%f", &a);

printf("a. Wpisano liczbe %.1f lub %.1e\n",a,a);
printf("b. Wpisano liczbe +%.3f lub %.3E\n",a,a);

    return 0;
}