#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>


int liczba_start, liczba;

int main()
{

    puts("Rozpocznij odlicznie podaj od jakiej liczby chcesz zaczac?");
    printf("Wprowadz liczbe naturalna: ");
    scanf("%d", &liczba_start);

    for( liczba = liczba_start; liczba>=0; liczba--){
        switch(liczba){
                case 10: puts("10 - dziesiec");
                    break;
                case 9: puts("9 - dziewiec");
                    break;
                case 8: puts("8 - osiem");
                    break;
                case 7: puts("7 - siedem");
                    break;
                case 6: puts("6 - szesc");
                    break;
                case 5: puts("5 - peic");
                    break;
                case 4: puts("4 - cztery");
                    break;
                case 3: puts("3 - trzy");
                    break;
                case 2: puts("2 - dwa");
                    break;
                case 1: puts("1 - jeden");
                    break;
                default: puts("start!!!!!!!!!!!");
               }
//            sleep(1);
    }
    return 0;
}
