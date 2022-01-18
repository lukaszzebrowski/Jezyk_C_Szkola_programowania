#include <stdio.h>
#include <string.h>
int main()
{
    char imie[40], nazwisko[40];
    int x, y;
    printf("Wprowadz swoje imie:\n");
    scanf("%s", imie);
    printf("Wprowadz swoje nazwisko:\n");
    scanf("%s", nazwisko);
    x = strlen(imie);
    y = strlen(nazwisko);
    printf("%s %s\n", imie, nazwisko);
    printf("%d %*d\n", x, x, y, y);
    printf("%s %s\n", imie, nazwisko);
    printf("%*d %*d\n", x, x, y, y);
    
    
    
    return 0;
}