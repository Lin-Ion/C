//05 CycleFuntion

#include <stdio.h>

int Sum(int a) 
{
	if (a <= 1)
		return a;
	else
		return a + Sum(a - 1);
}

int main() 
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%d\n",Sum(n));

	return 0;
}
