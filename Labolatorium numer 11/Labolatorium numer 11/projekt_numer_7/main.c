#include <stdio.h>
#include <stdlib.h>
#define DL 5


struct dane_osobowe{
    char imie[DL];
    char nazw[DL];
};

struct facet{
    struct dane_osobowe person;
    char ulub_jedz[DL];
    char zawod[DL];
    float dochody;
};

int main(){

    struct facet gosc[2] = {
        {{  "Chip", "Hyperlink"},
            "talerz chipsow",
            "trener osobisty",
            36827.00
        },

        {{  "Norbert", "Brzuchacz"},
            "mus lososiowy",
            "redaktor brukoca",
            23227.00
        }
    };

    struct facet *on;
    printf("   adres #1: %p | adres #2: %p\n", &gosc[0], &gosc[1]);
    on = &gosc[0];
    printf("wskaznik #1: %p | wskaznik #2: %p\n", on,on+1);

    printf("on->dochody ma wartosc %.2f $: (*on).dochody ma wartosc %.2f $\n", on->dochody, (*on).dochody);
    printf("on->ulub_jedz ma wartosc %.2f $: on-> person.nazw ma wartosc %s\n ", on->ulub_jedz, on->person.nazw);
    return 0;
}
