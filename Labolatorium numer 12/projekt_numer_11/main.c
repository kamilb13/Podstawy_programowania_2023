#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'
#define DLAN 50

int main(){
    char plik[DLAN];
    char ch;
    FILE *wp;
    long licznik, koniec;
    puts("Podaj nazwe pliku do otwarcia:");
    gets(plik);
    if((wp = fopen(plik, "rb")) == NULL){
        printf("Nie moge otworzyc %s\n", plik);
        exit(1);
    }
    fseek(wp, 0L, SEEK_END);

    koniec = ftell(wp);

    for(licznik = 1L; licznik <= koniec; licznik++){
        fseek(wp, -licznik, SEEK_END);
        ch = getc(wp);
        if(ch != CNTL_Z && ch != '\r'){
            putchar(ch);
        }
// DLA MACINTOSCHAAA
//        if (ch == '\r'){
//            putchar('\r');
//        }else{
//            putchar(ch);
//        }
    }
    putchar('\n');
    fclose(wp);
    return 0;
}
