//Ȧ��:0 ¦��:1
#include <stdio.h>

int main()
{
	int year;
	printf("���� �Է�:");
	scanf_s("%d", &year);

	//result = (year+1)&1;

	printf("%d\n", ((year & 1) ^ 1));

	return 0;
}