#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dlugosc_tab;

void insertion_sort(int tab[], int size);
void zapytaj_o_rozmiar();
void uzupelnij_tab(int* tab);
void wyswietl_tab(int tab[]);
void sprawdz_czy_dlugosc_dobra();
void histogram(int* tab[]);
void wyswietl_histogram(int tab[]);
void uzupelnij_tab_zerami(int* tab);
void how_many_times(int *tab1, int size, int *tab2);
void zapisz_polowe_nr1_tab(int tab[], int *polowa_nr1_tab, int polowa);
void zapisz_polowe_nr2_tab(int tab[], int *polowa_nr2_tab, int polowa);
void wyswietl_polowe_tab(int tab[], int polowa);

int main(){

    zapytaj_o_rozmiar();
    int tablica[dlugosc_tab];
    int histogram[26];
    int polowa = dlugosc_tab/2;
    int polowa_nr1_tab[polowa];
    int polowa_nr2_tab[dlugosc_tab-polowa];
    uzupelnij_tab(tablica);
    puts(" ");
    puts("___Wydruk testowy___");
    wyswietl_tab(tablica);
    puts(" ");
    puts("polowa_nr1_********");
    zapisz_polowe_nr1_tab(tablica, polowa_nr1_tab, polowa);
    wyswietl_polowe_tab(polowa_nr1_tab, polowa);
    puts("");
    puts("polowa_nr2_********");
    zapisz_polowe_nr2_tab(tablica, polowa_nr2_tab, polowa);
    wyswietl_polowe_tab(polowa_nr2_tab, polowa);
    puts(" ");
    puts(" ");
    puts(" ");
    insertion_sort(polowa_nr1_tab, dlugosc_tab/2);
    puts("Insertion sort na polowki nr 1");
    wyswietl_polowe_tab(polowa_nr1_tab, polowa);
    puts(" ");
    puts(" ");
    uzupelnij_tab_zerami(histogram);
    how_many_times(polowa_nr2_tab, polowa, histogram);
    puts("Histogram dla polowki nr 2");
    wyswietl_histogram(histogram);
    return 0;
}

void zapisz_polowe_nr1_tab(int tab[], int* polowa_nr1_tab, int polowa){
    int i=0;
    for( i=0;i<polowa;i++){
        polowa_nr1_tab[i] = tab[i];
    }
    return;
}

void zapisz_polowe_nr2_tab(int tab[], int* polowa_nr2_tab, int polowa){
    int i = polowa;
    for( i = polowa; i<dlugosc_tab ;i++){
        polowa_nr2_tab[i-polowa] = tab[i];
    }
    return;
}

void insertion_sort(int tab[], int size) {
    for (int i = 1; i < size; i++) {
        int key = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] < key) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = key;
    }
}

void zapytaj_o_rozmiar(){
    printf("Podaj dlugosc tablicy (nie mniejszy niz 10 i nie wiekszy niz 20): ");
    scanf("%d", &dlugosc_tab);
    sprawdz_czy_dlugosc_dobra();
    return dlugosc_tab;
}

void sprawdz_czy_dlugosc_dobra(){
    int czy_git = 0;
    while(czy_git = 1){
        if(dlugosc_tab < 10 || dlugosc_tab > 20){
            czy_git = 1;
            printf("\nTablica za mala lub za duza!!!\n\n");
            zapytaj_o_rozmiar();
        }
        else{
            czy_git = 0;
            //printf("dobra tablica");
            break;
        }
    }

}

void uzupelnij_tab(int* tab){
    srand(time(NULL));
    int i;
    for(i = 0; i < dlugosc_tab; i++){
        tab[i] = -10 + rand()%26;
    }
    return;
}

void wyswietl_tab(int tab[]){
    int i;
    for(i = 0; i < dlugosc_tab; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return;
}

void wyswietl_polowe_tab(int tab[], int polowa){
    int i;
    for(i = 0; i < polowa; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return;
}

void uzupelnij_tab_zerami(int* tab){
    int i;
    for(i = 0; i < 26; i++){
        tab[i] = 0;
    }
    return;
}

void wyswietl_histogram(int tab[]){
    int i;
    for(i = -10; i <= 15; i++){
        printf("%d jest w ilosci = %d\n", i, tab[i+10]);
    }
    return;
}

void how_many_times(int tab1[], int size, int tab2[]) {
    for (int i = 0; i < size; i++) {
        tab2[tab1[i]+10]++;
    }
}
