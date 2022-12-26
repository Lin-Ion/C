//자리수 세기
#include <stdio.h>

int countdigit(int n);

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("자리수의 개수: %d\n", countdigit(n));

	return 0;
}

int countdigit(int n)
{
	if (n < 10)
		return 1;
	return 1 + countdigit(n / 10);
}