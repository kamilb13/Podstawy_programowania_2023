#include <stdio.h>
#include <stdlib.h>

enum names_of_days {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

void print_message(enum names_of_days day);

int main()
{
    enum names_of_days day;
    for(day = MONDAY; day <= SUNDAY; day++)
        print_message(day);
    return 0;

}

void print_message(enum names_of_days day){
switch(day){
case SATURDAY:
case SUNDAY:
    printf("%d WOLNE!!!!\n", day+1);
    break;
default:
    printf("%d DO PRACY\n", day+1);
}
}
