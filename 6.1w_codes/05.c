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

	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}