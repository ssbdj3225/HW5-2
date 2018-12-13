#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	int i, x, y, z, j;
	int roll[11] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		z = x + y - 2;
		roll[z] = roll[z] + 1;
	}
	printf("     2      3      4      5      6      7      8      9     10     11     12  \n");
	for (j = 0; j < 11; j++)
	{
		printf("%6d ", roll[j]);
	}
	printf("\n");

	system("pause");
	return 0;
}