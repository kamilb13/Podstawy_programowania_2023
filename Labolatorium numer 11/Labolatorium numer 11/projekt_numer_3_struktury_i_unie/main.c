#include <stdio.h>
#include <stdlib.h>
#define DL 5

struct daneos {
    char imie[DL];
    char nazw[DL];
    int litery;
};
void pokaz_rozmiar(const struct daneos *);
//void pokaz_rozmiar(const struct daneos);

int main()
{
    struct daneos osoba;
    printf("Struktura daneos ma rozmiar %d bajty.\n", sizeof(osoba));
    puts("_________________________________________");
    //pokaz_rozmiar(osoba);
    pokaz_rozmiar(&osoba);
    return 0;
}
/*
void pokaz_rozmiar(const struct daneos pole){
    printf("imie: %d bajty.\n", sizeof(pole.imie));
    printf("nazw: %d bajty.\n", sizeof(pole.nazw));
    printf("litery: %d bajty.\n", sizeof(pole.litery));
    puts("_________________________________________");
    printf("daneos: %d bajty.\n", sizeof(pole.imie) + sizeof(pole.nazw) + sizeof(pole.litery));
    return;
}*/

void pokaz_rozmiar(const struct daneos *pole){
    printf("imie: %d bajty.\n", sizeof(pole->imie));
    printf("nazw: %d bajty.\n", sizeof(pole->nazw));
    printf("litery: %d bajty.\n", sizeof(pole->litery));
    puts("_________________________________________");
    printf("daneos: %d bajty.\n", sizeof(pole->imie) + sizeof(pole->nazw) + sizeof(pole->litery));
    return;
}


