#include <stdio.h>

int main(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)		//1���� n ���� �ݺ�
	{
		for (int j = 1; j <= i; j++)	//1���� i ���� �ݺ�
		{
			printf("%d ", j);
		}
		printf("\n");	//������ ��� ��
	}

	return 0;
}