#include <stdio.h>

int wysokosc = 6;
int i,j,k=0;
char z='F';
int main()
{
for (i=0; i<=wysokosc;i++)
{ 
    for (j=0;j<i; j++)
    {
        printf("%c",z-j);
    }
        printf("\n");
    
    
}       
return 0;
}