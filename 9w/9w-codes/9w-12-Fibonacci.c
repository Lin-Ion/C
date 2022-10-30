//피보나치

#include <stdio.h>

int m[64] = { 0 };

int fib(int n);
int main()
{
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fib(i));

	return 0;
}
int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 2) + fib(n - 1);
}