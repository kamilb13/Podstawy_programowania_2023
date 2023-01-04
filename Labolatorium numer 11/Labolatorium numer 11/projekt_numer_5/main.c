#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 41
#define MAXAUT 31

struct ksiazka{
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float cena;
};

int main()
{
    struct ksiazka bibl;
    printf("Podaj tytul ksiazki.\n");
    gets(bibl.tytul);
    printf("Podaj tytul autora.\n");
    gets(bibl.autor);
    printf("Teraz podaj wartosc.\n");
    scanf("%f", &bibl.cena);
    printf("Tytul: %s autor: %s, cena: %.2f\n", bibl.tytul, bibl.autor, bibl.cena);
    printf("%s: \"%s\" (%.2f zl)\n", bibl.tytul, bibl.autor, bibl.cena);
    return 0;
}
