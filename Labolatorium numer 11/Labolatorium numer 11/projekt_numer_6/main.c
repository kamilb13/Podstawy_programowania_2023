#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 41
#define MAXAUT 31
#define MAXKS 5

struct ksiazka{
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};

int main(){
    struct ksiazka bibl[MAXKS];
    int licznik = 0;
    int index;
    printf("Podaj tytul ksiazki.\n");
    printf("Aby zakonczyc wcisnij [enter] na poczatku wiersza.\n");
    while(licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] != '\0'){
        printf("Podaj tytul autora.\n");
        gets(bibl[licznik].autor);
        printf("Teraz podaj wartosc.\n");
        scanf("%f", &bibl[licznik++].wartosc);
        while(getchar() != '\n'){ continue; }/*czysci wiersz wejsciowy*/
        printf("Podaj kolejny tytul.\n");
    }
    printf("Oto lista twoich ksiazek: ");
    for(index = 0; index < licznik; index++){
        printf("Tytul: %s autor: %s, cena: %.2f\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
    }
    return 0;
}
