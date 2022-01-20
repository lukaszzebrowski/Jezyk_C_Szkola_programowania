#include <stdio.h>

int main(void)
{
int licznik, suma, x=1;

scanf("%d", &licznik);
suma=0;
while (licznik--)
{
    suma+=x;
    x++;
}
printf("suma = %d\n",suma);
    return 0;
}