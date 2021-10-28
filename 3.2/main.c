#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    printf("Wpisz kod ASCII np. 66:\n");
    scanf("%d",&x);
    printf("Kodowi ASCII: %d odpowiada znak: %c\n",x,x);
    system("PAUSE");
    return 0;
}
