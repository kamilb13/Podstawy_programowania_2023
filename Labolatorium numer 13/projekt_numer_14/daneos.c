#include <stdio.h>
#include "daneos.h"

void wprowadz(daneos *wskn){
    int i;
    printf("Prosze podac imie: ");
    fgets(wskn->imie, DL_LAN, stdin);
    i = 0;
    while(wskn->imie[i] != '\n' && wskn->imie[i] != '\0')
        i++;
    if(wskn->imie[i] == '\n'){
        wskn->imie[i] == '\0';
    }else{
        while(getchar() != '\n')
        continue;
    }
    printf("Prosze podac nazwisko: ");
    fgets(wskn->nazwisko, DL_LAN, stdin);
        i = 0;
    while(wskn->nazwisko[i] != '\n' && wskn->nazwisko[i] != '\0')
        i++;
    if(wskn->nazwisko[i] == '\n'){
        wskn->nazwisko[i] == '\0';
    }else{
        while(getchar() != '\n')
        continue;
    }
}

void wyswietl(const daneos *wskn){
    printf("%s %s", wskn->imie,wskn->nazwisko);
}
