//순환함수 제곱
#include <stdio.h>

int power(int base,int power_raised);

int main(void)
{
	int x;
	int y;

	printf("밑수: ");
	scanf_s("%d", &x);

	printf("지수: ");
	scanf_s("%d", &y);

	printf("%d^%d = %d\n", x, y, power(x, y));

	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised == 1)
		return base;
	return base * power(base, power_raised - 1);
}