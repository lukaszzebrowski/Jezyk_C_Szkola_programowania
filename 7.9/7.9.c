#include <stdio.h>
 
int main()
{

int pierwsza;

printf("Wpisz liczbe calkowita:\n");
printf("Wpisz'q' aby zakonczyc\n");

while (scanf("%d",&pierwsza)==1)
{
    if (pierwsza%2==0)
        {
            pierwsza-=1;
        }
    printf("Liczby pierwsze mniejsze badz rowne wprowadzonej liczbie:\n");    
    while (pierwsza>1)
        {   
            printf("%d, ",pierwsza);
            pierwsza-=2;
        }
    printf("2, 1\n");
    printf("Wpisz liczbe calkowita:\n");
    printf("Wpisz'q' aby zakonczyc\n");
}
return 0;
}