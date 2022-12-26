//430p dice challenge

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int freq1 = 0;
	int freq2 = 0;
	int freq3 = 0;
	int freq4 = 0;
	int freq5 = 0;
	int freq6 = 0;
	int i;

	for (i = 0; i < 10000; i++)
		switch ((rand() % 6) + 1) {
		case 1:freq1++; break;
		case 2:freq2++; break;
		case 3:freq3++; break;
		case 4:freq4++; break;
		case 5:freq5++; break;
		case 6:freq6++; break;
		}

	printf("====================\n");
	printf("면 빈도\n");
	printf("====================\n");

	//빈도 출력
	printf("%3d %3d \n", 1, freq1);
	printf("%3d %3d \n", 2, freq2);
	printf("%3d %3d \n", 3, freq3);
	printf("%3d %3d \n", 4, freq4);
	printf("%3d %3d \n", 5, freq5);
	printf("%3d %3d \n", 6, freq6);


	return 0;
}