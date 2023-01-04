#include <stdio.h>
#include <stdlib.h>
#define FUNDDL 50

struct fundusze{
    char bank[FUNDDL];;
    double bankfund;
    char oszcz[FUNDDL];
    double oszczfund;
};

double suma(double, double);

int main(){

    struct fundusze edek = {
    "bank czosnkowo-melonowy",
    2024.72,
    "kasa w choroszczy",
    8233.22
    };
    printf("edek ma w sumie %.2f zl.\n", suma(edek.bankfund, edek.oszczfund));
    return 0;
}

double suma(double x, double y){
    return (x + y);
}
