//test max min

#include <stdio.h>

#define SIZE_ROW 5
#define SIZE_COLUMN 3

int main()
{
	int max, min;
	int student_test[SIZE_ROW][SIZE_COLUMN] =
	{
		30,10,11,
		40,90,32,
		70,65,56,
		70,43,32,
		80,10,89
	};

	for (int c = 0; c < SIZE_COLUMN; c++) {
		
		max = student_test[0][c];
		min = student_test[0][c];
		for (int r = 1; r < SIZE_ROW; r++){
			
			if (max < student_test[r][c])
				max = student_test[r][c];

			if (min > student_test[r][c])
				min = student_test[r][c];

		}
		printf("시험 #%d의 최대점수=%d\n", c+1, max);
		printf("시험 #%d의 최저점수=%d\n", c+1, min);
	}

	return 0;
}