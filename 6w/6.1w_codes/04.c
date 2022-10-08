#include <stdio.h>

#define n 101

int main(void)
{
	int prime[n] = {0}; //0���� n������ �迭�� ��� 0���� �ʱ�ȭ��

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
�Ҽ��� �����ϱ� ���ؼ��� �������� �Ҽ� ���θ� Ȯ���ϴ� �ͺ���(����� ���ϴ� ���)
�����佺�׳׽��� ü�� ����ؼ� ���ϴ°��� ȿ�����̴�.
*/