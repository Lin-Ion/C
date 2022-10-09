#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, end;

	int num;
	
	printf("1번 프로그램\n");
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	start = clock();

	printf("약수: ");
	for (int i = 1; i <= num;i++)
	{
		if (num % i == 0)
			printf("%d ",i);
	}
	
	end = clock();
	printf("\n걸린 시간: %d ms\n",(end - start));

	return 0;
}