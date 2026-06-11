#include<stdio.h>

int main(void)
{
    int date = 11;
    int month = 6;
    int year = 2026;
    
    printf("%i/0%i/%i\n",  date, month, year);
    printf("%d/0%d/%d\n", year, month, date);
}