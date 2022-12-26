#include <stdio.h>

#define n 101

int main(void)
{
	char prime[n] = {0}; //0부터 n까지의 배열을 모두 0으로 초기화함

	for (int i = 2; i*i < n; i++)
	{
		if (prime[i] == 1)
			continue;
		for (int j = i*2; j < n; j += i)
			prime[j] = 1;
	}

	for (int i = 2; i < n; i++)
	{
		if (prime[i] == 0)
			printf("%d ", i);
	}

	return 0;
}

/*
소수를 나열하기 위해서는 정수마다 소수 여부를 확인하는 것보다(약수로 구하는 방식)
에라토스테네스의 체를 사용해서 구하는것이 효율적이다.
*/
