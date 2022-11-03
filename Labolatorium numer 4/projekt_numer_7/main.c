#include <stdio.h>
#include <stdlib.h>

unsigned int dzien, stan;

void jaki_mamy_dzien(unsigned int dzien_tygodnia); //protopyt funkcji/procedury

int main()
{
    printf("Podaj dzien tygodnia od 1 do 7: ");
    printf("Dzien tygodnia: ");
    stan = scanf("%u", &dzien); //scanf zwraca 1 gdy "wszystko jest dobrze" 0 gdy jest blad
    while(stan == 1 && dzien > 0 && dzien < 8){
        printf("Podales %u dzien tygodnia czyli: ", dzien);
        jaki_mamy_dzien(dzien);
        printf("\nPodaj dzien tygodnia od 1 do 7, dowolny znak inny niz liczba konczy dzialnie programu!\n");
        printf("dzien tygodnia: ");
        stan = scanf("%u", &dzien);
    }
    printf("Milego dnia");
    return 0;
}

void jaki_mamy_dzien(unsigned int dzien_tygodnia){
    switch(dzien_tygodnia){
        case 1:
            printf("poniedzialek");
            break;
        case 2:
            printf("wtorek");
            break;
        case 3:
            printf("sroda");
            break;
        case 4:
            printf("czwartek");
            break;
        case 5:
            printf("piatek");
            break;
        case 6:
            printf("sobota");
            break;
        case 7:
            printf("niedziela");
            break;
    }
}
