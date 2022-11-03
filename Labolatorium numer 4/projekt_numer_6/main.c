#include <stdio.h>
#include <stdlib.h>

double bok_1, bok_2, wynik;

int suma(int a, int b){
    return a+b;
}

double pole(double, double);

int main(){
    //printf("%d", suma(2, 6));

    printf("Podaj pierwszy bok: ");
    scanf("%lf", &bok_1);
    printf("Podaj drugi bok: ");
    scanf("%lf", &bok_2);
    printf("Pole prostokata wynosi: %f", pole(bok_1, bok_2));

    return 0;
}


double pole(double bok_1, double bok_2){
    wynik = bok_1 * bok_2;
    return wynik;
}
