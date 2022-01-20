#include <stdio.h>
 
int main()
 
{
 
    int dni;
    int i=1;
    int suma=0;

    
    
    printf("Podaj ilosc dni:\n",&dni);
    scanf("%d",&dni);
    while (dni--)
    {
        suma+=i*i;
        i++;
    }

    printf("Suma kwadratow wynosi: %d\n", suma);

    return 0;
 
}