#include <stdio.h>
#include <windows.h>

int main(void)
{
	int count;

	printf("카운터의 초기값을 입력하시오: ");
	scanf_s("%d", &count);

	for (count; count > 0; count--)
	{
		printf("%d ", count);
		Sleep(100);
	}
	printf("\a");

	return 0;
}