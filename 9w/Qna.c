#include<stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);
int main()
{
	for (int i = -9; i < 10; i++)
	{
		printf("even(%d)의 결과: ", i);
		even(i) ? printf("짝수\t") : printf("홀수\t");

		printf("absolute(%d)의 결과: %d\t", i, absolute(i));

		printf("sign(%d)의 결과: ", i);
		switch (sign(i))
		{
		case 0:
			printf("영(0)");
			break;
		case 1:
			printf("양수");
			break;
		case -1:
			printf("음수");
			break;
		}
		printf("\n");
	}
	
	return 0;
}

int even(int n) 
{
	char result;

	result = (n & 0b1)^0b01; //홀수의 최하위비트는 0, vise versa 1

	return result;
}

int absolute(int n)		//int형은 4바이트(32bit)
{
	char result;

	if (n >> 31)	//첫 비트 읽기 (음수는 1 :: 양수는 0)
		result = ~n + 1;	//2의 보수 +1
	else
		result = n;

	return result;
}

int sign(int n)
{
	char result;
	if (n == 0)	//0인 경우
		result = 0;
	else
		result = (n>>31) ? -1 : 1;

	return result;
}