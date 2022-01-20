#include <stdio.h>
#include <string.h>
#include <math.h>
#define min 60 
int main()
{
int h;
int m;
while (m>0)
{
    printf("Wpisz minuty, a my zamienimy to na godziny:\n");
    scanf("%d",&m);
    h=m/min;
    printf("%d minut to %d godzin i %d minut\n",m,h,m%min); 
}

    return 0;
}