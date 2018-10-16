#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int a = 3, b = 6, c;
	printf("交换之前a和b的值:  a=%d\tb=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("交换之后a和b的值:  a=%d\tb=%d\n",a,b);
	system("pause");
	return 0;
}