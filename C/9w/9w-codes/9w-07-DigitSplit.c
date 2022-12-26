#include <stdio.h>

void show_digit(int x);

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	show_digit(n);

	return 0;
}

void show_digit(int x)	//if x=1234
{
	if (x==0)
		return;			//함수 탈출
	show_digit(x / 10);	// 123 > 12 > 1 > 0
	printf("%d ", x % 10);// 1 > 2 > 3 > 4
}