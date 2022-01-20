#include <stdio.h>

int main()
{
float a, b, c, d;
printf("Podaj dwie liczby zmiennoprzecinkowe:\n");
while (scanf("%f %f",&a, &b)==2)
{    

    printf("%f \n",(a-b)/(a*b)); 
}

    return 0;
}
        