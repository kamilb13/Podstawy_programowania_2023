#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIESIACE 12

int main(){

    int dni[MIESIACE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int index;

    for(index = 0; index < MIESIACE; index++){
        printf("Miesiac %d ma %d dni.\n", index+1, dni[index]);
    }


    return 0;
}
