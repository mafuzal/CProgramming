#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5
int main()
{
    //Initilaize rainfall data for 2011-2015
    float rain[YEARS][MONTHS] = {
        {4.3,4.3,3.2,2.1,3.0,5.7,4.1,2.2,1.4,2.6,3.9,1.7},
        {2.3,2.4,1.9,1.7,2.7,3.1,3.3,0.0,0.8,0.9,2.1,0.5},
        {2.0,3.2,0.1,2.1,3.1,2.0,2.5,1.9,1.8,2.9,0.9,1.5},
        {1.1,1.5,2.1,3.9,2.5,2.7,0.8,0.6,1.6,2.4,2.7,3.5},
        {0.0,0.4,0.8,0.3,1.3,1.9,2.7,3.0,2.4,2.1,2.2,0.5}
        };
int year, month;
float subtot, total;
printf("YEAR\t\tRAINFALL (INCHES)\n");

for(year = 0, total = 0; year < YEARS; year++)
{
    for(month = 0, subtot =0;month<MONTHS;month++)
    {
        subtot += rain[year][month];
    }
    printf("%5d \t\t %15.1f\n", 2010 + year, subtot);
    total += subtot;
}
printf("Yearly Average is %.1f inches. \n\n",total/YEARS);
printf("MONTHLY AVERAGES:\n\n");
printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
for (month = 0; month < MONTHS; month++)
{
    for(year = 0, subtot =0; year <YEARS;year++)
    {
        subtot += rain[year][month];
    }
    printf("%4.1f ",subtot/YEARS);
        
}
printf("\n");
return 0;
}