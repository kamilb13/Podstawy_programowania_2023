#include <stdio.h>
#include <stdlib.h>

void zamiana(int *u, int *v); //prototyp

int main()
{
    int x = 5, y = 10;
    printf("Pocztokwo x = %d, a y = %d.\n", x, y);
    zamiana(&x, &y);

    printf("A teraz x = %u, a y = %d.\n", x ,y);
    return 0;
}

void zamiana(int *u, int *v){
    int temp;
    printf("Poczotkowo u = %d, a v = %d.\n", *u, *v);
    temp = *u;

    *u = *v;
    *v = temp;
    printf("A teraz u = %d, a v = %d.\n", *u, *v);
}
