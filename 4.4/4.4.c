#include <stdio.h>
#include <string.h>
int main()
{
float cm;
float m;
char imie[40];

printf("Jak masz na imie?\n");
scanf("%s", imie);
printf("Ile masz wzrostu?\n");
scanf("%f", &cm);
m=cm/100;
printf("%s, masz %.2f metra wzrostu.\n", imie, m);
    return 0;
}