#include <stdio.h>
#include <stdlib.h>

int dni=365;
int lata;

int main()
{
    printf("Ile masz lat?\n");
    scanf("%d",&lata);
    printf("A wiec masz %d lat, czyli %d dni\n",lata,lata*dni);
    system("PAUSE");
    return 0;
}
