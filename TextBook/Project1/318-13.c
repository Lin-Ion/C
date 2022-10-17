#include <stdio.h>
int main()
{
	int n1 = 6021;
	int n2 = 0;

	do
	{
		n2 += n1 % 10;
		printf("%d",(n1 % 10));
		n1 /= 10;

	} while (n1>0);

	printf("\n%d", n2);
}