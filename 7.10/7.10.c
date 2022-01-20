#include <stdio.h>
#include <stdlib.h>

#define podatek 0.15
#define reszta 0.28
#define stwol 17850
#define glrodz 23900
#define malwsp 29750
#define malsolo 14875

int main()
{
    int kategoria;
    int dochod;
    float kwota_podatku;

    printf("Podaj katogerie:\n");
    printf("1. Stan Wolny\n");
    printf("2. Glowa rodziny\n");
    printf("3. Malzenstwo, rozliczenie wspolne\n");
    printf("4. Malzenstwo, rozliczenie osobne\n");
    printf("5. Aby wyjsc\n"); 
    
    while (scanf("%d",&kategoria)==1 && (kategoria>=1 && kategoria <=5))
    {
        if (kategoria==5)
        {
            break;
        }
        if (kategoria==1)
        {
            printf("Wybrales kategorie 'Stan wolny'\nPodaj swoj dochod:\n");
            scanf("%d", &dochod);
            kwota_podatku=podatek*dochod+reszta*(dochod-stwol);
            printf("Nalezny podatek wynosi: %.2f\n",kwota_podatku);
        }
        if (kategoria==2)
        {
            printf("Wybrales kategorie 'Glowa rodziny'\nPodaj swoj dochod:\n");
            scanf("%d", &dochod);
            kwota_podatku=podatek*dochod+reszta*(dochod-glrodz);
            printf("Nalezny podatek wynosi: %.2f\n",kwota_podatku);
        }
        if (kategoria==3)
        {
            printf("Wybrales kategorie 'Malzenstwo, rozliczenie wspolne'\nPodaj swoj dochod:\n");
            scanf("%d", &dochod);
            kwota_podatku=podatek*dochod+reszta*(dochod-malwsp);
            printf("Nalezny podatek wynosi: %.2f\n",kwota_podatku);
        }
        if (kategoria==4)
        {
            printf("Wybrales kategorie 'Malzenstwo, rozliczenie osobne'\nPodaj swoj dochod:\n");
            scanf("%d", &dochod);
            kwota_podatku=podatek*dochod+reszta*(dochod-malsolo);
            printf("Nalezny podatek wynosi: %.2f\n",kwota_podatku);
        }
    printf("Podaj katogerie:\n");
    printf("1. Stan Wolny\n");
    printf("2. Glowa rodziny\n");
    printf("3. Malzenstwo, rozliczenie wspolne\n");
    printf("4. Malzenstwo, rozliczenie osobne\n");
    printf("5. Aby wyjsc\n"); 
        
    }
    return 0;    
}