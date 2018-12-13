#include<stdio.h>
#include<stdlib.h>

int compare(int const array[], int left, int right, int i);
int main(void)
{
	int array[8] = { 20,30,40,50,60,70,80,90 };
	int left, right, mid, key, x = 0;
	printf("請輸入你要找的值:");
	scanf_s("%d", &key);
	left = 0;
	right = 7;
	x = compare(array, left, right, key);
	if (x >= 0)
	{
		printf("你要找的值%d在位置%d\n", key, x);
	}
	else
	{
		printf("沒有這個值\n");
	}
	system("pause");
	return 0;
}
int compare(int const array[], int left, int right, int i)
{
	int mid = (left + right) / 2;
	if (left <= right)
	{
		if (i == array[mid])
			return(mid);
		else if (i > array[mid])
			return(compare(array, mid + 1, right, i));
		else
			return(compare(array, left, mid - 1, i));
	}
	else
		return(-1);
}