#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int ch;
    FILE *wp;
    long licznik = 0;
    if(argc != 2){
        printf("Sposob uzycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }
    if((wp = fopen(argv[1],"r")) == NULL ){
        printf("Nie mozna otworzyc %s\n", argv[1]);
    }
    while((ch = getc(wp)) != EOF){
        putc(ch, stdout);
        licznik++;
    }
    fclose(wp);
    printf("Plik %s zawiera %ld znakow\n",argv[1], licznik);
    return 0;
}
