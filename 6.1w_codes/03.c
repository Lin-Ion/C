#include <stdio.h>

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)		//1부터 n 까지 반복
	{
		for (int j = 1; j <= i; j++)	//1부터 i 까지 반복
		{
			printf("%d ", j);
		}
		printf("\n");	//한줄의 출력 끝
	}

	return 0;
}