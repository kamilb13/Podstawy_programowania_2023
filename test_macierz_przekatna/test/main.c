#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 100
#define KOLUMY 100

void zapytaj(int n);
void uzupelnij_tablice(double (*tab)[KOLUMY], int wiersze, int kolumny);
void wyswietl_tablice(double (*tab)[KOLUMY], int wiersze, int kolumny);
void odwroc_przekatna(double (*tab)[KOLUMY], int wiersze, int kolumny);

int main(){
    int n = 0 ;
    do{
        printf("Podaj n: ");
        scanf("%d", &n);
    }while(!(n>=5&&n<=100));

    double macierz[WIERSZE][KOLUMY];
    uzupelnij_tablice(macierz, n, n);

    wyswietl_tablice(macierz, n, n);
    puts("*****************************************************");
    odwroc_przekatna(macierz, n, n);
    wyswietl_tablice(macierz, n, n);
    return 0;
}

void uzupelnij_tablice(double (*tab)[KOLUMY], int wiersze, int kolumny){
    int i;
    int j;
    srand(time(NULL));
    for( i = 0 ; i < wiersze ; i++ ){
        for( j = 0 ; j < kolumny ; j++ ){
            tab[i][j] = -5+(double)rand()/RAND_MAX*(15);
        }
    }
    return;
}

void wyswietl_tablice(double (*tab)[KOLUMY], int wiersze, int kolumny){
    int i;
    int j;
    for( i = 0 ; i < wiersze ; i++ ){
        for( j = 0 ; j < kolumny ; j++ ){
            printf("%f  ", tab[i][j]);
        }
        puts("\n");
    }
    return;
}

void odwroc_przekatna(double (*tab)[KOLUMY], int wiersze, int kolumny) {
    int i;
    int j;
    int x;
    double przekatna[wiersze];
    for( i = 0 ; i < wiersze ; i++ ){
        for( j = 0 ; j < kolumny ; j++ ){
            if(i==j){
                przekatna[x] = tab[i][j];
                x++;
            }
        }
    }

    for( i = 0 ; i < wiersze ; i++ ){
        for( j = 0 ; j < kolumny ; j++ ){
            if(i==j){
                tab[i][j] = przekatna[wiersze-i-1];
            }
        }
    }


    return;
}
