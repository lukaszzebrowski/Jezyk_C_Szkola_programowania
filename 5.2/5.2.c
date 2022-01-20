#include <stdio.h>
 
int main()
{
    int a;
    int b=0;
    printf("Podaj liczbe calkowita\n");
    scanf("%d",&a);
    b=a;
    while (b<=a+10)
    {
        printf("%d ",b);
        b++;
    }
    return 0;
}