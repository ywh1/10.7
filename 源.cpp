#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	printf("100--200֮��������У�\n");
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		if (i%j == 0)break;//����ܱ�����������������ѭ�����������Ļ�����ִ��ֱ��j>i
		if (j == i)printf("%d\t", i);
	}
	system("pause");
	return 0;
}