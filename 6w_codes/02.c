//���� ���� ��
#include <stdio.h>
int main(void)
{
	int x,y,z;	// x,y,z
	int min = 0;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x < y)
		min = x;	// x<y ��� x ����
	else
		min = y;	// y<x ��� y ����

	if (z < min)
		min = z;	//x, y�� ���� ���� z�� ��

	printf("���� ���� ������ %d�Դϴ�.\n",min);

	return 0;
}