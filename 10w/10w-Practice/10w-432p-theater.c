//432p 극장 예약 시스템

#include <stdio.h>

#define SIZE 10

int main()
{
	char ans1;
	int ans2, ans3, i;
	int seats[SIZE] = { 0 };
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf_s(" %c", &ans1,2);

		if (ans1 == 'n')
			break;
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("----------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");
		
		printf("몇 개의 좌석을 예약하시겠습니까: ");
		scanf_s("%d", &ans3);
		for (i = 0; i < ans3; i++) {
			printf("몇번째 좌석을 예약하시겠습니까: ");
			scanf_s("%d", &ans2);
			if (seats[ans2 - 1] == 0) {	// 예약되지 않았으면
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else {						// 이미 예약되었으면
				printf("이미 예약된 자리입니다.\n");
			}
		}
	}

	return 0;
}