//가장 작은 값 list

#include <stdio.h>
int main(void)
{
	
	int ary[255] = {0};
	char min = 0;
	int n = 0;

	printf("정수의 개수를 입력하세요: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("정수를 입력하세요(%d/%d): ", i+1, n);
		scanf_s("%d", &ary[i]);
	}

	for (int i = 1; i < n ; i++)
	{
		if (ary[i] < ary[min])
			min = i;
	}

	printf("제일 작은 정수는 %d입니다.\n", ary[min]);

	return 0;
}