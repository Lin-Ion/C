#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void)
{
	clock_t start, end;

	int num;
	int div1[255] = { 0 };
	int div2[255] = { 0 };
	unsigned char index = 0; //signed�� ���� �Ǹ� index �������� �������� ����.
	char exception = 0;	//���� ó���� ����

	printf("2�� ���α׷�\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	start = clock();

	printf("���: ");
	for (int i = 1; i <= (int)sqrt(num); i++)
	{
		if (num % i == 0)
		{
			div1[index] = i;
			div2[index] = num / i;
			index++;
		}
	}
	index--;

	//���=sqrt(����)�� ��� ����ó��
	if (div1[index] == div2[index])
		exception = 1;

	for (int i = 0; i <= index - exception; i++)//0���� index ����
	{
		printf("%d ", div1[i]);
	}
	for (int i = index; i >= 0; i--)//index ���� 0����
	{
		printf("%d ", div2[i]);
	}

	end = clock();
	printf("\n�ɸ� �ð�: %d ms\n", (end - start));

	return 0;
}