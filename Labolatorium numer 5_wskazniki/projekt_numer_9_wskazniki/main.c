#include <stdio.h>
#include <stdlib.h>

int main(){
    int *wsk = NULL;
    int siostra = 3;
    wsk = &siostra;


    printf("Adres zmiennej &wsk: %p\n", &wsk);
    printf("Adres zmiennej &siostra: %p\n\n", &siostra);

    printf("Wartośc wskazywana przez wskaxnik *wsk: %d\n", *wsk);
    printf("Adres &siostra przechowywana we wskazniku: %p\n\n", wsk);

    siostra++;
    printf("Dekrementacja zmiennej siostra o 1: siostra++\n");
    printf("Wartosc wskazywana przez wskaznik *wsk: %d\n\n");

    *wsk += 1;
    printf("Zwiekszenie wskaznika o 1: *wsk + 1\n");
    printf("Wartosc wskazywana przez wskaznik *wsk: %d\n", wsk);
    printf("Wartosc wskazywanej zmiennej siostra: %d\n", siostra);

    return 0;
}
