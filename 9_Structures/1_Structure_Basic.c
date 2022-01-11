#include <stdio.h>
#include <stdlib.h>

struct date
{
    int month;
    int day;
    int year;

};
void main()
{
    struct date today;
    today.month = 1;
    today.day = 10;
    today.year = 2022;

    printf("Today: %d-%d-%d",today.day, today.month, today.year);

}