#include<stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);
int main()
{
	for (int i = -9; i < 10; i++)
	{
		printf("even(%d)�� ���: ", i);
		even(i) ? printf("¦��\t") : printf("Ȧ��\t");

		printf("absolute(%d)�� ���: %d\t", i, absolute(i));

		printf("sign(%d)�� ���: ", i);
		switch (sign(i))
		{
		case 0:
			printf("��(0)");
			break;
		case 1:
			printf("���");
			break;
		case -1:
			printf("����");
			break;
		}
		printf("\n");
	}
	
	return 0;
}

int even(int n) 
{
	char result;

	result = (n & 0b1)^0b01; //Ȧ���� ��������Ʈ�� 0, vise versa 1

	return result;
}

int absolute(int n)		//int���� 4����Ʈ(32bit)
{
	char result;

	if (n >> 31)	//ù ��Ʈ �б� (������ 1 :: ����� 0)
		result = ~n + 1;	//2�� ���� +1
	else
		result = n;

	return result;
}

int sign(int n)
{
	char result;
	if (n == 0)	//0�� ���
		result = 0;
	else
		result = (n>>31) ? -1 : 1;

	return result;
}