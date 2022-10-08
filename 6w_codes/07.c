//모음 자음 구분 개선
#include <stdio.h>
int main(void)
{
	char eng;

	printf("문자를 입력하시오: ");
	eng = getchar() | 0x20;	
	//대문자를 소문자로 바꾸기 위해서 32비트 자리의 0을 1으로 만듬

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

//06.c에서 사용한 비트마스킹 적용