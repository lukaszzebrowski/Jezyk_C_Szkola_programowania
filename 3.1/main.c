#include <stdio.h>
#include <stdlib.h>

int x=2147483647;
float y=1.0e37;
float y1=1.0e-37;

int main(void)
{
    printf("Przepe³nienie zmiennej calkowitej:\n");
    printf("%d\t%d\t%d\n",x,x+1,x+2);
    printf("Przepelnienie zmiennej zmiennoprzecinkowej:\n");
    printf("%f\n",y*y),
    printf("Niedomiar zmiennej zmiennoprzecinkowej:\n");
    printf("%.100f\n",y1*y1);
    return 0;
}
