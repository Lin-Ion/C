#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, end;

	int num;
	
	printf("1�� ���α׷�\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	start = clock();

	printf("���: ");
	for (int i = 1; i <= num;i++)
	{
		if (num % i == 0)
			printf("%d ",i);
	}
	
	end = clock();
	printf("\n�ɸ� �ð�: %d ms\n",(end - start));

	return 0;
}