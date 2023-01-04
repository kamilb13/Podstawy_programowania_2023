#include <stdio.h>
#include <stdlib.h>

#define WIERSZE 5
#define KOLUMNY 5

void uzupelnij_tablice_recznie(int (*tab)[KOLUMNY], int wiersze, int kolumny);
void wyswietl_tablice(int (*tab)[KOLUMNY], int wiersze, int kolumny);
void mnozenie_macierzy(int argument_1[WIERSZE][KOLUMNY], int argument_2[WIERSZE][KOLUMNY], int wynik[WIERSZE][KOLUMNY], int wiersze_1, int wiersze_2, int kolumny_1, int kolumny_2);

int main(){
    int macierzA[WIERSZE][KOLUMNY];
    int macierzB[WIERSZE][KOLUMNY];
    int macierzW[WIERSZE][KOLUMNY];

    int wiersze_1, wiersze_2, kolumny_1, kolumny_2;

    printf("Podaj wymiar pierwszej macierzy: \n");
    printf("Podaj ilosc wierszy 1_szej macierzy: ");
    scanf("%d", &wiersze_1);
    printf("Podaj ilsoc kolumn 1_szej macierzy: ");
    scanf("%d", &kolumny_1);


    printf("Podaj wymiar macierzy B: \n");
    do{
        printf("Podaj ilosc wierszy 2_szej macierzy: ");
        scanf("%d", &wiersze_2);
    }while(kolumny_1 != wiersze_2);
    printf("Podaj ilsoc kolumn 2_szej macierzy: ");
    scanf("%d", &kolumny_2);

    uzupelnij_tablice_recznie(macierzA, wiersze_1, kolumny_1);
    printf("A = \n");
    wyswietl_tablice(macierzA, wiersze_1, kolumny_1);

    uzupelnij_tablice_recznie(macierzB, wiersze_1, kolumny_1);
    printf("B = \n");
    wyswietl_tablice(macierzB, wiersze_2, kolumny_2);

    printf("Mnozenie macierzy: A * B = W\n");

    mnozenie_macierzy(macierzA, macierzB, macierzW, wiersze_1, kolumny_1, wiersze_2, kolumny_2);
    printf("W = \n");
    wyswietl_tablice(macierzW, wiersze_1, wiersze_2);
    return 0;
}

void uzupelnij_tablice_recznie(int (*tab)[KOLUMNY], int wiersze, int kolumny){
    int i,j;
    for(i = 0; i<wiersze; i++){
        for(j = 0; j<kolumny; j++){
            printf("Macierz[%d][%d] = ", i+1, j+1);
            scanf("%d", &tab[i][j]);
        }
    }
    return;
}

void wyswietl_tablice(int (*tab)[KOLUMNY], int wiersze, int kolumny){
    int i,j;
    printf("[\n");
    for(i = 0; i<wiersze; i++){
        for(j = 0; j<kolumny; j++){
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
    printf("\n");
    return;
}

void mnozenie_macierzy(int argument_1[WIERSZE][KOLUMNY], int argument_2[WIERSZE][KOLUMNY], int wynik[WIERSZE][KOLUMNY], int wiersze_1, int wiersze_2, int kolumny_1, int kolumny_2){
    int i,j,k;
    for(i = 0; i<wiersze_1; i++){
        for(j = 0; j<kolumny_1; j++){
            wynik[i][j] = 0;
            for(k = 0; k<kolumny_1;k++){
                wynik[i][j] += argument_1[i][k]*argument_2[k][j];
            }
        }
    }
    return;
}

