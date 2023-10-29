#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int remaining_days = 0;
	int i;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_month[1] = 29;
	}

	for (i = month - 1; i < 12; i++)
	{
		remaining_days += days_in_month[i];
	}

	remaining_days -= day;

	printf("Day of the year: %d", day);
	printf("Remaining days: %d", remaining_days);
}
