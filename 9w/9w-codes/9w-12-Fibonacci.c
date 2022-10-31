//피보나치

#include <stdio.h>
#include <time.h>

int fib(int n);

int main()
{
	clock_t t = clock();

	for (int i = 0; i < 40; i++)
		printf("fib(%d) = %d\n", i, fib(i));

	printf("소요시간: %d ms\n", clock() - t);

	return 0;
}

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 2) + fib(n - 1);
}