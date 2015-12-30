#include <stdio.h>
void func1(void);
void func2(void);
void main(void)
{
	func1();
	func1();
	func1();
	func2();
}

void func1(void)
{
	printf("For he's a jolly good fellow!\n");
}

void func2(void)
{
	printf("While nobody can deny!\n");
}