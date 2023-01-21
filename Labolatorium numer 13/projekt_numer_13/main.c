#include <stdio.h>
#include <stdlib.h>
#define TYLKO_SPRAWDZAM
#define GRANICA 4

int main(){
    int i, suma = 0;
    for(i = 1; i <= GRANICA ;i++){
        suma += 2*i*i + 1;

#ifdef TYLKO_SPRAWDZAM
    printf("i=%d, suma = %d\n", i, suma);
#else
    //printf("i=%d, suma = %d\n", i, suma);
#endif // TYLKO_SPRAWDZAMY
    }
    printf("Suma koncowa = %d\n", suma);
    return 0;
}
