//���� ���� ����
#include <stdio.h>
int main(void)
{
	char eng;

	printf("���ڸ� �Է��Ͻÿ�: ");
	eng = getchar();

	switch (eng)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
		break;
	}

	return 0;
}