//08 월급 총액
#include <stdio.h>

#define SIZE 10
#define ARRAY_PRINT(A, size) printf("%s[] = ", #A); array_print(A, size)

int array_sum(int* A, int size);
void array_print(int* A, int size);

int main(void)
{
	int A[10] = { 1,2,3, };

	ARRAY_PRINT(A, SIZE);

	printf("월급의 합=%d\n", array_sum(A, SIZE));

	return 0;
}
int array_sum(int* A, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}
void array_print(int* A, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}printf("\n");
}