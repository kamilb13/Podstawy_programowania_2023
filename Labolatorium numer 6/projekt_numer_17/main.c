#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 5
#define NUMBER_OF_ELEMENTS 30

void show_table(int *tab, int n);
void fill_table_with_random_numbers(int *tab);
double srednia(int *tab);

int main()
{
    int i;
    int table[NUMBER_OF_ELEMENTS];
    fill_table_with_random_numbers(table);
    printf("Tablica table[NUMBER_OF_ELEMENTS]:\n");
    show_table(table, NUMBER_OF_ELEMENTS);
    printf("Srednia %f \n", srednia(table));
    return 0;
}

show_table(int *tab, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("array[%d]: %d\n",i,tab[i]);
    }
    return;
}

void fill_table_with_random_numbers(int *tab){
    srand(time(0));
    int i;
    for(i = 0; i < NUMBER_OF_ELEMENTS ;i++){
        tab[i] = rand()%20;
    }
    return;
}

double srednia(int *tab){
    double sum = 0, srednia;
    int i;
    for(i = 0; i < NUMBER_OF_ELEMENTS ;i++){
        sum += tab[i];
    }
    srednia = sum/NUMBER_OF_ELEMENTS;
    return srednia;
}
