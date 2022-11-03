#include <stdio.h>
#include <stdlib.h>

int a, b, max;
int liczba;

void najwieksza(){
    printf("Podaj a i b: \n");
    scanf("%d %d", &a, &b);
    if(a>b) max = a;
    else max = b;

    printf("Max = %d", max);
    }

void slicz(){
    printf("Podaj liczbe ");
    scanf("%d", &liczba);
    switch(liczba){
    case 1: printf("Klikles 1"); break;
    case 2: printf("Klikles 2"); break;
    case 3: printf("Klikles 3"); break;
    default: printf("Klikles inna wartosc\n");
    }
}


int main(){
    //najwieksza();
    //slicz();





    return 0;
}
