//모음 자음 구분
#include <stdio.h>
int main(void)
{
	char eng;

	printf("문자를 입력하시오: ");
	eng = getchar();

	switch (eng)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;
	}

	return 0;
}