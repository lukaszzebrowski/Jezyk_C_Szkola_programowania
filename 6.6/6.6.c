#include <stdio.h>
#include <string.h>
int main()
{
    int i,x;
    char slowo[10];
    printf("Wprowadz slowo\n");
    scanf("%s", slowo);
    x = strlen(slowo);
    for(i=x; i>=0; i--)
    {
        printf("%c", slowo[i]);
    }
    printf("\n");
    
    
    
    return 0;
}