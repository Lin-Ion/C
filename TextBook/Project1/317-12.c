#include <stdio.h>
int main()
{
	int a = 0, b = 1, c=0;
	int n=10;
	
	for (int i=0; i <= n; i++)
	{
		printf("%d\n",a);
		c = a + b;
		a = b;
		b = c;
	}
}