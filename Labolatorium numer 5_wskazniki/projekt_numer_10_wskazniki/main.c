#include <stdio.h>
#include <stdlib.h>

void f1(int *); //prototyp

int main()
{

    int siostra = 14;
    printf("Wartosc zmiennej \"siostra\" przed przekazaniem do funkcji f1(): %d\n", siostra);
    f1(&siostra); //przekazanie adresu zmiennej siostra
    printf("Wartosc zmiennej \"siostra\" po zakonczeniu funkcji f1(): %d\n", siostra);
    return 0;
}

void f1(int *x){
    puts("W funkcji ");
    printf("Wartosc parametru \"x\" przed zmiana: %d\n", *x);
    printf("Wskaznik ma rozmiar: %d bajty\n", sizeof(x));
    *x+=1;
    printf("Wartosc parametru \"x\" po zmianie: %d\n", *x);
    return;
}
