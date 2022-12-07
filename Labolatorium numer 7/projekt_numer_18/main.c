#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 30

void fill_table_with_random_numbers(int *tab);
void fill_table_with_zero_numbers(int *tab);
void how_many_times(int *tab1, int *tab2);
void print_table(int *tab, int n);


int main()
{

    int table[ROZMIAR];
    int histogram[ROZMIAR + 1];
    fill_table_with_random_numbers(table);
    fill_table_with_zero_numbers(histogram);
    how_many_times(table, histogram);
    printf("Tablica zapelniona liczbami pseudolosowymi:\n");
    print_table(table, ROZMIAR);
    printf("Histogram wystapien liczb: \n");
    print_table(histogram, ROZMIAR+1);

    return 0;
}

void print_table(int *tab, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d]: %d\n", i, tab[i]);
    }
    return;
}

void fill_table_with_random_numbers(int *tab){
    srand(time(NULL));
    int i;
    for(i = 0; i < ROZMIAR; i++){
        tab[i] = rand()%11;
    }
    return;
}

void fill_table_with_zero_numbers(int *tab){
    int i;
    for(i = 0; i < ROZMIAR+1; i++){
        tab[i] = 0;
    }
    return;
}

void how_many_times(int *tab1, int *tab2){
    int i;
    for(i = 0; i < ROZMIAR; i++){
        tab2[tab1[i]]++;
    }
    return;
}
