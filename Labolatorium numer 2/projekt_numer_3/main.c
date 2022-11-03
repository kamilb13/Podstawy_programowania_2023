#include <stdio.h>
#include <stdlib.h>

    char znak_1, znak_2, znak_3, max; //deklaracja zmiennych

int main()
{

    printf("Podaj pierwsza znak: ");
    scanf(" %c", &znak_1);
    printf("znak_1 = %c to dziesietnie %d\n", znak_1, znak_1);
    printf("\nPodaj drugi znak: ");
    scanf(" %c", &znak_2);
    printf("znak_2 = %c to dziesietnie %d\n", znak_2, znak_2);
    printf("\nPodaj trzeci znak: ");
    scanf(" %c", &znak_3);
    printf("znak_3 = %c to dziesietnie %d\n", znak_3, znak_3);

//    max = (znak_1 > znak_2)?znak_1:znak_2;
//    max = (max > znak_3)?max:znak_3;
//    printf("\nmax = %d", max);

    if(znak_1>znak_2){
        if(znak_1>znak_3){
            max = znak_1;
        }else{
            max = znak_3;
        }
    }
    else{
        if(znak_2>znak_3){
            max = znak_2;
        }
        else{
            max = znak_3;
        }
    }
    printf("\nNajwiekszym znakiem jest %c dziesietnie to %d\n", max, max);

    return 0;
}

