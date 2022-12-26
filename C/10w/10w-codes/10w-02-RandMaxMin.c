// 02 Random max min

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int array_max(int arr[]);
int array_min(int arr[]);

int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE] = {0};

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand();
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("최대값은 %d\n", array_max(arr));
	printf("최소값은 %d\n", array_min(arr));
	
	return 0;
}

int array_max(int arr[])
{
	int max_value = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (max_value < arr[i])
			max_value = arr[i];

	return max_value;
}

int array_min(int arr[])
{
	int min_value = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (min_value > arr[i])
			min_value = arr[i];

	return min_value;
}