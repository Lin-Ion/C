//09 탐색
#include <stdio.h>

#define SIZE 10
#define ARRAY_PRINT(A, size) printf("%s[] = ", #A); array_print(A, size)

int array_search(int* A, int size, int search_value);
void array_print(int* A, int size);

int main(void)
{
	int A[10] = { 100, 200, 300, };
	int search_value;

	ARRAY_PRINT(A, SIZE);

	search_value = 200;
	printf("월급이 %d만원인 사람의 인덱스 = %d\n", search_value, array_search(A, SIZE, search_value));

	return 0;
}
int array_search(int* A, int size, int search_value)
{
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value) {
			return i;
		}
	}
	return -1;
}
void array_print(int* A, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}printf("\n");
}