//���� ���� ���� ����
#include <stdio.h>
int main(void)
{
	char eng;

	printf("���ڸ� �Է��Ͻÿ�: ");
	eng = getchar() | 0x20;	
	//�빮�ڸ� �ҹ��ڷ� �ٲٱ� ���ؼ� 32��Ʈ �ڸ��� 0�� 1���� ����

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

//06.c���� ����� ��Ʈ����ŷ ����