#include<stdio.h>
#include<stdlib.h>

int maxx = 0;
void maxi(int const array[], int i);
void main(void)
{
	int num, i;
	int array[80];
	printf("�A�n��J�X�Ӿ�Ƥ�j�p:");
	scanf_s("%d", &num);
	printf("�п�J%d�Ӿ��:", num);
	for (i = 0; i < num; i++)
		scanf_s("%d", &array[i]);
	maxi(array, num);
	system("pause");
	return 0;
}
void maxi(int const array[], int i)
{
	if (i == 0)
	{
		printf("%d�O�̤j��\n", maxx);
	}
	else
	{
		if (array[i - 1] > maxx)
		{
			maxx = array[i - 1];
		}
		maxi(array, i - 1);
	}
}