#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 10

void fill_table_with_random_numbers(int *tab);

void swap(int *first, int *second);
void selection_sort(int array[]);
void insertion_sort(int array[]);

void how_many_times(int *tab1, int *tab2);
void print_table(int *tab);

//void swap(int *first, int *second);

int main()
{

    int table1[ROZMIAR];
    int table2[ROZMIAR];

    fill_table_with_random_numbers(table1);
    fill_table_with_random_numbers(table2);

    printf("\nTablica nieposortowana 1:\n");
    print_table(table1);
    printf("\nTablica nieposortowana 2:\n");
    print_table(table2);

    printf("\nTablica posortowana funkcja selection_sort():\n");
    selection_sort(table1);
    print_table(table1);

    printf("\nTablica posortowana funkcja insertion_sort():\n");
    insertion_sort(table2);
    print_table(table2);


    return 0;
}

void print_table(int *tab){
    int i;
    for(i = 0; i < ROZMIAR; i++){
        printf("%3d", tab[i]);
    }
    return;
}

void fill_table_with_random_numbers(int *tab){
    srand(time(NULL));
    int i;
    for(i = 0; i < ROZMIAR; i++){
        tab[i] = rand()%9;
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

void swap(int *first, int *second){
    int tmp;
    tmp = *first;
    *first = *second;
    *second = tmp;
    return;
}

void selection_sort(int array[]){
    int i,j;
    for(i = 0; i < ROZMIAR - 1; i++){
        int min = i;
        for(j = i + 1; j < ROZMIAR; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        if(min != j){
            swap(&array[min], &array[i]);
        }
    }
}

void insertion_sort(int array[]){
    int i;
    for(i = 1; i < ROZMIAR; i++){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
    array[j+1] = key;
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
