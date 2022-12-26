//최대값

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	int prices[SIZE] = { 0 };
	int i, minimum;

	printf("----------------------------------------\n");
	for (i = 1; i < SIZE + 1; i++)
		printf("%-3d ",i);
	printf("\n----------------------------------------\n");
	srand((unsigned)time(NULL));
	for ( i = 0; i < SIZE; i++){
		prices[i] = (rand() % 100) + 1;
		printf("%-3d ", prices[i]);
	}
	printf("\n\n");

	minimum = prices[0];

	for (i = 1; i < SIZE; i++){
		if (prices[i] > minimum)
			minimum = prices[i];
	}
	printf("최대값은 %d입니다.\n", minimum);

	return 0;
}