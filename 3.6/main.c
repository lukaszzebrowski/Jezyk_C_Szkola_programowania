#include <stdio.h>
#include <stdlib.h>

long double masa=3.0*1E-23;
double masawody=1000;
double ilosc;

void function(double a,double b,double c)
{
    printf("Ilosc czasteczek wody w %Lf litrach wynosi:\n%e\n",ilosc,a/b*c);
}

int main(void)


 {
    printf("Wpisz ilosc litrow:\n");
    scanf("%Lf",&ilosc);
    function(masawody,masa,ilosc);
    system("PAUSE");

    return 0;
}
