#include <stdio.h>



int main()
{
int wielkosc = 8;
int tab[wielkosc];
int i,j;

printf("Wpisz %d liczb calkowitych:\n", wielkosc);

for (i=0; i<wielkosc; i++)
{
    scanf("%d", &tab[i]);
}
for(j=i-1;j>=0;j--)
{
    printf("%d ", tab[j]);
}        
return 0;
}