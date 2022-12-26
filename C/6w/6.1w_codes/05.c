#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n = 1;

	while (1)
	{
		sum += n;
		if (sum > 10000) 
		{
			sum -= n;
			n--;
			break;
		}
		n++;
	}

	printf("1부터 %d까지의 합이 %d입니다.", n, sum);

	return 0;
}