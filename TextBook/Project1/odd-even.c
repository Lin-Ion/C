//È¦¼ö:0 Â¦¼ö:1
#include <stdio.h>

int main()
{
	int year;
	printf("Á¤¼ö ÀÔ·Â:");
	scanf_s("%d", &year);

	//result = (year+1)&1;

	printf("%d\n", ((year & 1) ^ 1));

	return 0;
}