#include <stdio.h>
#include <windows.h>

int main(void)
{
	int count;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &count);

	for (count; count > 0; count--)
	{
		printf("%d ", count);
		Sleep(100);
	}
	printf("\a");

	return 0;
}