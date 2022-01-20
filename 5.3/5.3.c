#include <stdio.h>
#include <string.h>
#include <math.h>
#define weekday 7 
int main()
{
int week;
int day;
while (day>0)
{
    printf("Podaj liczbe dni, a my zamienimy je na tygodnie:\n");
    scanf("%d",&day);
    week=day/weekday;
    printf("%d dni to %d tygodnie i %d dni\n",day,week,day%weekday); 
}

    return 0;
}