#include <stdio.h>

int main()
{
    float gora;
    float i;
    float j=1;
    float x=1;
    float y=1;
    printf("Wprowadz gorna granice:\n");
    scanf("%f",&gora);


    for(i=1;i<gora;i++)
    {   
    j++;
    x+=1/j;
    y-=1/j;
    }
    printf("%f\n",x);
    printf("%f\n",y);
     
    return 0;
}
        