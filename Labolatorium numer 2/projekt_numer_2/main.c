#include <stdio.h>
#include <stdlib.h>

    int liczba_1, liczba_2, liczba_3, max; //deklaracja zmiennych

int main()
{

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba_1);
    printf("Liczba_1 = %d\n", liczba_1);
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba_2);
    printf("Liczba_2 = %d\n", liczba_2);
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba_3);
    printf("Liczba_3 = %d\n", liczba_3);

    if(liczba_1>liczba_2){
        if(liczba_1>liczba_3){
            max = liczba_1;
        }else{
            max = liczba_3;
        }
    }
    else{
        if(liczba_2>liczba_3){
            max = liczba_2;
        }
        else{
            max = liczba_3;
        }
    }

    printf("\nNajwieksza liczba jest: %d\n", max);

    return 0;
}
