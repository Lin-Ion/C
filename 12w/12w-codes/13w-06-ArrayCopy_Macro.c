//06 정수 배열 복사 매크로 사용
#include <stdio.h>

#define SIZE 10
#define ARRAY_PRINT(A, size) printf("%s[] = ", #A); array_print(A, size)

void array_copy(int* A, int* B, int size);
void array_print(int* A, int size);

int main(void)
{
	int A[10] = { 1,2,3, },
		B[10] = { 0 };

	printf("복사 전\n");
	ARRAY_PRINT(A, SIZE);
	ARRAY_PRINT(B, SIZE);
	
	array_copy(A, B, SIZE);

	printf("복사 후\n");
	ARRAY_PRINT(A, SIZE);
	ARRAY_PRINT(B, SIZE);

	return 0;
}
void array_copy(int* A, int* B, int size)
{
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}
void array_print(int* A, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}printf("\n");
}