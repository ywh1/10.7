#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int a = 3, b = 6, c;
	printf("����֮ǰa��b��ֵ:  a=%d\tb=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("����֮��a��b��ֵ:  a=%d\tb=%d\n",a,b);
	system("pause");
	return 0;
}