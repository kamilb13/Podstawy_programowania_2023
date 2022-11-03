#include <stdio.h>
#include <stdlib.h>

double a1, r, q;
unsigned int n;
char znak;

void wprowadz_dane_arytmetyczny(void);
void wprowadz_dane_geometryczny(void);
double ciag_arytmetyczny(double a1, double roznica, unsigned int ilosc_wyrazow);
double ciag_geometryczny(double a1, double ilroaz, unsigned int ilosc_wyrazow);

int main()
{
    printf("Program liczacy sume ciagu arytemtycznego lub geometrycznego \n");
    printf("A lub a ciag aryt   G lub g ciag geo");
    scanf("%c", &znak);
    switch(znak){
        case 'A': {
            wprowadz_dane_arytmetyczny();
            printf("Suma ciagu aryt wynosi %.3lf\n", ciag_arytmetyczny(a1, r, n));
            break;
        case 'a': {
            wprowadz_dane_arytmetyczny();
            printf("Suma ciagu aryt wynosi %.3lf\n", ciag_arytmetyczny(a1, r, n));
            break;
        case 'G': {
            wprowadz_dane_geometryczny();
            printf("Suma ciagu geo wynosi %.3lf\n", ciag_geometryczny(a1, q, n));
            break;
        case 'g': {
            wprowadz_dane_geometryczny();
            printf("Suma ciagu geo wynosi %.3lf\n", ciag_geometryczny(a1, q, n));
            break;
        default: printf("Zle wybrales ");
        }
    }
    return 0;
}

void wprowadz_dane_arytmetyczny(void){
    printf("Wybrales ciag arytm: ");
    printf("Podaj pierwszy wyraz ciagu aryt: a1 = ");
    scanf("%lf", &a1);
    printf("Podaj roznice ciagu");
    scanf("%lf", &r);
    printf("Podaj ilosc wyrazow ciagu: n = ");
    scanf("%d", &n);
    printf("Ciag arytmetyczny: \na1 = %lf, r = %lf, n %u.\n", a1, r, n);
    return 0;
}

void wprowadz_dane_geometryczny(void){
    printf("Wybrales ciag geo: ");
    printf("podaj kolejno: \n");
    printf(" - pierwszy wyraz caigu geo: a1 = ");
    scanf("%lf", &a1);
    do{
        printf(" - ilroaz ciagu geo: q = ");
        scanf("%lf", &q);
        if(q == 1){
            printf("Podales q = 1. Probuj ponownie!!!\n");
        }
    }while( q == 1);

    do{
        printf(" - ilsoc wyrazow ciagu geo: n = ");
        scanf("%d", &n);
        if( n <= 0){
            printf("Podales n = %d. Probuj ponownie!!!!\n");
        }
    }while(n<=0);
    return 0;
}

double ciagu_arytmetyczny(double a1, double r, unsigned int n){
    double suma_arytmetyczna;
    suma_arytmetyczna = 0.5*(2*a1+(n-1)*r)*n;
    return suma_arytmetyczna;
}

double ciag_geometryczny(double a1, double iloraz, unsigned int n){
    double ciag_geometryczny,q,potega = 1;
    int i;
    q = iloraz;
    for(i = 1; i <= n; i++){
        potega = potega*q;
    }
    ciag_geometryczny = (a1*(1-potega))/(1-q);
    return ciag_geometryczny;
}
