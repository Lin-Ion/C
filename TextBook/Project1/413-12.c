#include <stdio.h>
int fib(int n);
int memo[255] = { 0, };
int main()
{
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fib(i));
	return 0;
}
int fib(int n)
{
	memo[0] = 0;
	memo[1] = 1;
	if (n <= 1)
		return n;
	else
	{
		if (memo[n] != 0)
			return memo[n];
		memo[n] = fib(n - 1) + fib(n - 2);
		return memo[n];
	}
}