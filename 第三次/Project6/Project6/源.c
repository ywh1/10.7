#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, j;
	int arr[3] = { 45, 66, 98 };
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		if (arr[j ] < arr[j+1])
		{
			a = arr[j]; arr[j] = arr[j+1]; arr[j+1] = a;
		}
	}
	printf("三个数由大到小：");
	for (j= 0; j < 3; j++)	
	printf("%d \n", arr[j]);
	system("pause");
	return 0;
}