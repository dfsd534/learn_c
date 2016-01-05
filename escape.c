/* escape.c -- 使用转义字符*/
#include <stdio.h>
int main (void)
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf("$____\b\b\b\b\b\b\n");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.\n", salary, salary * 12.0);
	printf("\rGee!\n");
	return 0;
}