//놀이공원 탑승조건
#include <stdio.h>
int main(void)
{
	int height;
	int age;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &height);
	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	if (height >= 140 && age >= 10)	// 키 140이상 나이 10세 이상
		printf("타도 좋습니다.\n");
	else
		printf("죄송합니다.\n");

	return 0;
}