#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIERSZE 4
#define KOLUMNY 3

void uzupelnij_tablice_recznie(int (*tab)[KOLUMNY]);
void uzupelnij_tablice_pseudolosowo(int (*tab)[KOLUMNY]);
void wyswietl_tablice(int (*tab)[KOLUMNY]);
void mnozenie_macierzy_przez_liczbe(int (*tab)[KOLUMNY], int liczba, int wynik[WIERSZE][KOLUMNY]);

int main(){

    int macierzA[WIERSZE][KOLUMNY];
    int macierzW[WIERSZE][KOLUMNY];
    int skalar;
    //uzupelnij_tablice_recznie(macierzA);
    uzupelnij_tablice_pseudolosowo(macierzA);
    printf("A == \n");
    wyswietl_tablice(macierzA);

    printf("Mnozenie macierzy przez skalar: Liczba*A = W\n");
    printf("Podaj liczbe: ");
    scanf("%d", &skalar);

    mnozenie_macierzy_przez_liczbe(macierzA, skalar, macierzW);
    printf("W = \n");
    wyswietl_tablice(macierzW);

    return 0;

}

void uzupelnij_tablice_recznie(int (*tab)[KOLUMNY]){
    int i,j;
    for(i = 0; i<WIERSZE; i++){
        for(j = 0; j<KOLUMNY; j++){
            printf("Macierz[%d][%d] = ", i+1, j+1);
            scanf("%d", &tab[i][j]);
        }
    }
    return;
}

void uzupelnij_tablice_pseudolosowo(int (*tab)[KOLUMNY]){
    srand(time(NULL));
    int i,j;
    for(i = 0; i<WIERSZE; i++){
        for(j = 0; j<KOLUMNY; j++){
            tab[i][j] = -11+rand()%23;
        }
    }
    return;
}

void wyswietl_tablice(int (*tab)[KOLUMNY]){
    int i,j;
    printf("[\n");
    for(i = 0; i<WIERSZE; i++){
        for(j = 0; j<KOLUMNY; j++){
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
    printf("\n");
    return;
}


void mnozenie_macierzy_przez_liczbe(int (*tab)[KOLUMNY], int liczba, int wynik[WIERSZE][KOLUMNY]){
    int i,j;
    for(i=0;i<WIERSZE;i++){
        for(j=0;j<KOLUMNY;j++){
            wynik[i][j] = tab[i][j]*liczba;
        }
    }
    return;
}
