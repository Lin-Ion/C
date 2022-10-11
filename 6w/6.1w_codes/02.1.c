#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void)
{
	clock_t start, end;

	int num;
	int div1[255] = { 0 };
	int div2[255] = { 0 };
	unsigned char index = 0; //signed를 쓰게 되면 index 역할으로 적절하지 않음.
	char exception = 0;	//예외 처리용 변수

	printf("2번 프로그램\n");
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	start = clock();

	printf("약수: ");
	int max = (int)sqrt(num);
	for (int i = 1; i <= max; i++)
	{
		if (num % i == 0)
		{
			div1[index] = i;
			div2[index] = num / i;
			index++;
		}
	}
	index--;

	//약수=sqrt(정수)인 경우 예외처리
	if (div1[index] == div2[index])
		exception = 1;

	for (int i = 0; i <= index - exception; i++)//0부터 index 까지
	{
		printf("%d ", div1[i]);
	}
	for (int i = index; i >= 0; i--)//index 부터 0까지
	{
		printf("%d ", div2[i]);
	}

	end = clock();
	printf("\n걸린 시간: %d ms\n", (end - start));

	return 0;
}
