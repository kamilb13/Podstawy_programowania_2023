#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 31
void czy_jest_palindromem(char text[]);

int main()
{
    char text[ROZMIAR];
    printf("Wprowadz slowo aby sprawdzic czy jest ono palindromem:\n");
    gets(text);
    czy_jest_palindromem(text);

    return 0;
}

void czy_jest_palindromem(char text[]){
    int dlugosc_stringu = 0;
    int i, srodek, koniec;
    dlugosc_stringu = strlen(text);
    koniec = dlugosc_stringu - 1;
    srodek = dlugosc_stringu / 2;
    for(i = 0; i < koniec; i++){
        if(text[i] != text[koniec]){
            printf("Wprowadzone slowo nie jest palindromem.\n");
            break;
        }
        koniec--;
    }
    if(i == srodek){
        printf("Wprowadzone slowo jest palindromem.\n");
    }
    return;
}
