//홀수:0 짝수:1
#include <stdio.h>

int main()
{
	int year;
	printf("정수 입력:");
	scanf_s("%d", &year);

	//result = (year+1)&1;

	printf("%d\n", ((year & 1) ^ 1));

	return 0;
}