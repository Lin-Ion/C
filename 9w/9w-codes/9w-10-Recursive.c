// 1/1 + ... + 1/(n-1) + 1/n

#include <stdio.h>

double Recursive(int n);

int main()
{
	int n;
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("결과: %lf", Recursive(n));

	return 0;
}

double Recursive(int n)
{
	if (n == 1)
		return 1;	// + 1/1

	return 1.0 / n + Recursive(n - 1); // 1/n + 1/(n-1)
}