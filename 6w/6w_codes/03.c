//���̰��� ž������
#include <stdio.h>
int main(void)
{
	int height;
	int age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	if (height >= 140 && age >= 10)	// Ű 140�̻� ���� 10�� �̻�
		printf("Ÿ�� �����ϴ�.\n");
	else
		printf("�˼��մϴ�.\n");

	return 0;
}