#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 5
#define NUMBER_OF_ELEMENTS 10

void show_table(int *tab, int n);
void fill_table_with_random_numbers(int *tab);


int main()
{
    int i;
    int array[ROZMIAR];
    int table[NUMBER_OF_ELEMENTS];
    fill_table_with_random_numbers(table);
    printf("Wprowadz kolejne emelenty tablicy array[]:\n");
    for(i = 0; i < ROZMIAR; i++)
        scanf("%d", &array[i]);
    printf("Tablica array[ROZMIAR]:\n");
    show_table(array, ROZMIAR);
    puts("");
    puts("***************************");
    puts("");
    printf("Tablica table[NUMBER_OF_ELEMENTS]:\n");
    show_table(table, NUMBER_OF_ELEMENTS);
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
        tab[i] = -5 + rand()%11;
    }
    return;
}
