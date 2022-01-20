#include <stdio.h>

int main()
{
int lata;
float ewa, kasia;
    
for (ewa=100, kasia=100, lata=0; ewa>=kasia; ewa=ewa+10, kasia=kasia+kasia*0.05)
{
    lata++;
}

printf("Po %d latach inwestycja Kasi (%.2f zl) przekroczy wartosc inwestycji Ewy (%.2f zl).\n",lata, kasia, ewa);   
    
    
    return 0;
}