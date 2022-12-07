#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIESIACE 12

int main()
{
    puts("**************************.\n");
    printf("Okreslenie rozmiaru tablica za [pomoca operatora SIZEOF.\n");
    printf("%12s%8s\n", "Miesiac i ma", "dni[i].");
    printf("%19s\n", "--------------");
    int dni_MIESIACA[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    for (i = 0; i < sizeof(dni_MIESIACA)/sizeof(int); i++)
        printf("Miesiac %d ma %d dni.\n", i+1, dni_MIESIACA[i]);
    puts("*********************************************************");
    printf("Oznaczona inicjalizacja w standardzie C99.\n");
    printf("%12s%8s\n", "Miesiac i ma", "dni[i].");
    printf("%19s\n", "--------------");
    int dni[MIESIACE] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    for(i = 0; i < MIESIACE; i++)
        printf("Miesiac %d ma %d dni.\n", i+1, dni[i]);
    return 0;
}
