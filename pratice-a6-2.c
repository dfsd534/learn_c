#include <stdio.h>
int main(void)
{
	//int value;
	double value;
	for (value = 36; value > 0; value /= 2)
	{
		printf("%3d\n", value);
	}

	return 0;
}