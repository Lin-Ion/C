//���� ���� �� list

#include <stdio.h>
int main(void)
{
	
	int ary[255] = {0};
	char min = 0;
	int n = 0;

	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("������ �Է��ϼ���(%d/%d): ", i+1, n);
		scanf_s("%d", &ary[i]);
	}

	for (int i = 1; i < n ; i++)
	{
		if (ary[i] < ary[min])
			min = i;
	}

	printf("���� ���� ������ %d�Դϴ�.\n", ary[min]);

	return 0;
}