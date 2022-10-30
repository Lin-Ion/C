//피보나치 DP

#include <stdio.h>
int fib(int n);

int m[32] = { 0 };

int main()
{

	for (int i = 0; i < 32; i++)
		printf("fib(%d) = %d\n", i, fib(i));

	return 0;
}

int fib(int n)
{
	if (n <= 1)
		return n;

	if (m[n])
		return m[n];
	else 
		return m[n] = fib(n - 2) + fib(n - 1);
}