#include <stdio.h>

int main (void)
{
    //declaring the variables 
    int date;
    int month;
    int year;
    
    //taking inputs for variable 
    printf("enter date: ");
    scanf("%d", &date);
    printf("enter month: ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);
    //printing the inputs given by user
    printf("Today is: %d/%d/%d\n", date, month,year);
}