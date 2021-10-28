#include <stdio.h>
#include <stdlib.h>

char a[20];
char b[20];
char c[20];
char d[20];
char e[20];
char f[20];


int main(void)
{
    printf("Wpisz imie\n",&a);
    scanf("%s",&a);
    printf("Wpisz nazwisko\n",&b);
    scanf("%s",&b);
    printf("Wpisz ulice\n",&c);
    scanf("%s",&c);
    printf("Wpisz nr domu i mieszkania np.64/3\n",&d);
    scanf("%s",&d);
    printf("Wpisz kod pocztowy np. 10-900\n",&e);
    scanf("%s",&e);
    printf("Wpisz miasto\n",&f);
    scanf("%s",&f);

    printf("%s %s\n%s %s\n%s %s\n",a,b,c,d,e,f);
    system ("PAUSE");
    return 0;
}
