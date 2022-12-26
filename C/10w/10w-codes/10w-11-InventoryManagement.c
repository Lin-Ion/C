//11 inventory management system
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void numbers_print(int a[]);

int main()
{
	int numbers[SIZE];
	int ans;

	for (int i = 0; i < SIZE; i++)
		numbers[i] = (rand() % 5) + 1;

	numbers_print(numbers);

	printf("상품 번호를 입력하세요: ");
	scanf_s("%d", &ans);
	
	printf("상품 번호 %d의 위치는 %d입니다.\n",ans, numbers[ans-1]);

	return 0;
}

void numbers_print(int a[])
{
	printf("번호: ");
	for (int i = 1; i < SIZE+1; i++)
		printf("%2d ", i);
	printf("\n");

	printf("위치: ");
	for (int i = 0; i < SIZE; i++)
		printf("%2d ", a[i]);
	printf("\n");
}