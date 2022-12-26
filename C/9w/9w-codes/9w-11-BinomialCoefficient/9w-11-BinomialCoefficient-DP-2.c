//이항 계수 ver.Dynamic Programming

#include <stdio.h>
#include <stdlib.h>
int rec(int n, int k);

int main()
{
	int n, k;

	printf("n = ");
	scanf_s("%d", &n);
	printf("k = ");
	scanf_s("%d", &k);

	printf("결과: %d\n", rec(n, k));

	return 0;
}

int rec(int n, int k)
{
	static m[65][65] = { 0 };

	if (m[n][k])
		return m[n][k];
	if (k == 0 || k == n)
		return m[n][k] = 1;


	return m[n][k] = rec(n - 1, k - 1) + rec(n - 1, k);
}