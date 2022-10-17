#include<stdio.h>

double rec(double x)
{
	if (x <= 1)
		return 1;
	else
		return (1.0 / x) + rec(x - 1);
}
int main()
{
	printf("%lf\n", rec(10));
}
