#include<stdio.h>

int main() 
{

	
    int years;
    int days;

    printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("%d years is approx %d days\n", years, days);

    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("%d days is approx %d years\n", days, years);
}
