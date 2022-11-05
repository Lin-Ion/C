//05 Random Frequency

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int array_max(int arr[], int size);

int main()
{
	int n[SIZE] = { 0 };

	for (int i = 0; i < 100; i++)
		n[rand() % SIZE]++;

	for (int i = 0; i < SIZE; i++)
		printf("%d: %d\n", i + 1, n[i]);

	printf("가장 많이 나온 수 = %d\n", array_max(n, SIZE) + 1);

	return 0;
}

int array_max(int arr[], int size)
{
	int index_max = 0;

	for (int i = 1; i < size; i++)
		if (arr[index_max] < arr[i])
			index_max = i;

	return index_max;
}
