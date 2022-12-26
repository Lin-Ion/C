//이항 계수

#include <stdio.h>

int recursive(int n, int k);

int main()
{
	int n, k;

	printf("n = ");
	scanf_s("%d", &n);
	printf("k = ");
	scanf_s("%d", &k);

	printf("결과: %d\n", recursive(n, k));

	return 0;
}

int recursive(int n, int k)
{
	if (k == 0 | k == n)
		return 1;
	
	return recursive(n - 1, k - 1) + recursive(n - 1, k);
}

//Dynamic Programming 가능성