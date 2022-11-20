//02 2개정수 합 차 반환
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main()
{
	int sum, diff;

	get_sum_diff(100, -200, &sum, &diff);

	printf("원소들의 합 = %d\n", sum);
	printf("원소들의 차 = %d\n", diff);
	
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}