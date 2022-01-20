#include <stdio.h>
#include <math.h>
int main()
{
    int wielkosc = 8;
    int tab[wielkosc];
    int i,j=0;
    
    
    for(i=0;i<wielkosc;i++)
    {
        tab[i]=pow(2,i);
    }
    while(j<i)
    {
        printf("2^%d = %d\n",j, tab[j]);
        
        j++;
    }
    
    
    
    return 0;
}