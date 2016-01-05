#include <stdio.h>
int main(void)
{
	int n;
	int m = 1;
	n = (4 + m++) + (3 + ++m);
	printf("%d\n", n);
	printf("%d\n", m);
	return 0;
}