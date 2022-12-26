// 1/1 + 1/2 + ... + 1/(n-1) + 1/n

#include <stdio.h>

double recursive(int n);

int main()
{
	int n;
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%lf", recursive(n));

	return 0;
}

double recursive(int n)
{
	if (n == 1)
		return 1;

	return (1.0 / n) + recursive(n - 1);
}