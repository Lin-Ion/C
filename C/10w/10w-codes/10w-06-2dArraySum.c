// 06 2d array sum

#include <stdio.h>

#define ROW_SIZE 3
#define COLUMN_SIZE 5

int main()
{
	int arr[ROW_SIZE][COLUMN_SIZE] =
	{
		12,56,32,16,98,
		99,56,34,41,3,
		65,3,87,78,21
	};
	int i, j, sum = 0;

	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COLUMN_SIZE; j++)
			sum += arr[i][j];

		printf("%d행의 합계: %d\n", i, sum);
		sum = 0;
	}

	for (j = 0; j < COLUMN_SIZE; j++) {
		for (i = 0; i < ROW_SIZE; i++)
			sum += arr[i][j];

		printf("%d열의 합계: %d\n", j, sum);
		sum = 0;
	}

	return 0;
}