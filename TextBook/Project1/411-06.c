#include <stdio.h>

int power(int a,int b);
int main()
{
	printf("%d", power(2, 10));
	return 0;
}
int power(int a, int b)
{
	if (b == 1)
		return 2;
	return a * power(a, b - 1);
}