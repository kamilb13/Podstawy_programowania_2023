#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 10
int czy_anagramy(char text_1[], char text_2[], char alfabet[], int *, char *sign);


int main()
{
    static char znaki[25];
    char text1[ROZMIAR], text2[ROZMIAR];
    int flag, index, k = 0;
    char znak;
    for(index = 0; index < 25; index++){
        znaki[index] = 'a' + index;
    }
    printf("Wprowadz pierwsze slowo: ");
    gets(text1);
    printf("Wprowadz drugie slowo: ");
    gets(text2);
    flag = czy_anagramy(text1, text2, znaki, &k, &znak);
    if(flag == 1){
        printf("Slowa: \"%s\" i \"%s\" sa anagramami.\n", text1, text2);
        printf("Flaga wynosi: %d \n", flag);
    }
    else{
        printf("Slowa: \"%s\" i \"%s\" nie sa anagramami.\n", text1, text2);
        printf("Podane slowa roznia sie od siebie litera: %c\n", znak);
        printf("Flaga wynosi: %d \n", flag);
    }
    return 0;
}

int czy_anagramy(char text_1[], char text_2[], char alfabet[], int *indeks, char *sign){
    int first[26] = {0}, second[26] = {0}, index = 0;
    while(text_1[index] != '\0'){
        first[text_1[index]-'a']++;
        index++;
    }
    index = 0;
    while(text_2[index] != '\0'){
        second[text_2[index]-'a']++;
        index++;
    }
    for(index = 0; index < 26; index++){
        if(first[index] != second[index]){
            *indeks = index;
            *sign = alfabet[index];
            return 0;
        }
    }
    return 1;
}
