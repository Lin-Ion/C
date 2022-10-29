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

	if (k == 0 || k == n)
		return 1;

	if (!(m[n - 1][k - 1] && m[n - 1][k])) {
		if (!m[n - 1][k - 1])
			m[n - 1][k - 1] = rec(n - 1, k - 1);
		if (!(m[n - 1][k]))
			m[n - 1][k] = rec(n - 1, k);
	}

	m[n][k] = m[n - 1][k - 1] + m[n - 1][k];
	return m[n][k];
}