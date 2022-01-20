#include <stdio.h>

int main()
{
    int gora;
    int dol;
    int i;
    
    printf("Wprowadz gorna granice:\n");
    scanf("%d",&gora);
    printf("Wprowadz dolna granice:\n");
    scanf("%d",&dol);

    for(i=dol;i<=gora;i++)
    {   
        printf("%d, %d, %d\n",i,i*i,i*i*i);
    }
    
    return 0;
}
        