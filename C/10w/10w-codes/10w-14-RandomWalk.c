//14 random walk (repeat)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void reset_tile(__int8 tile[21][21])
{
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++)
			tile[i][j] = 0;
}

int main()
{
	srand((unsigned)time(NULL));

	__int8 tile[21][21] = { 0 },
		x,
		y;

	for (int count = 0; count < 10; count++, Sleep(1000)) {
		reset_tile(tile);	//모든 타일 0으로 초기화
		x = 10; y = 10;		//시작 위치 초기화
		tile[x][y] = 1;		//시작 타일 1으로 설정

		while (1) {
			switch (rand() % 8) {
			case 0:tile[x][--y]++; break;
			case 1:tile[++x][--y]++; break;
			case 2:tile[++x][y]++; break;
			case 3:tile[++x][++y]++; break;
			case 4:tile[x][++y]++; break;
			case 5:tile[--x][++y]++; break;
			case 6:tile[--x][y]++; break;
			case 7:tile[--x][--y]++; break;
			}
			if (x == 0 || x == 20 || y == 0 || y == 20)
				break;
		}//출력 준비 완료

		system("cls");	//창 초기화
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				if (tile[i][j] != 0)
					printf("x ");
				else
					printf(". ");
			}printf("\n");
		}
	}
	return 0;
}

