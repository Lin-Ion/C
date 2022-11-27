//09 탐색 삼항연산자
#include <stdio.h>

#define SIZE 4
#define ARRAY_PRINT(A, size) printf("%s[] = ", #A); array_print(A, size)

void array_merge(int* A, int* B, int* C, int size);
void array_print(int* A, int size);

int main(void)
{
	int A[SIZE] = { 2,5,7,8 },
		B[SIZE] = { 1,3,4,6 },
		C[SIZE * 2] = { 0, };

	array_merge(A, B, C, SIZE);

	ARRAY_PRINT(A, SIZE);
	ARRAY_PRINT(B, SIZE);
	ARRAY_PRINT(C, 2 * SIZE);

	return 0;
}
void array_merge(int* A, int* B, int* C, int size)
{
	int iA = 0,
		iB = 0,
		iC = 0,
		size_2 = size * 2;

	for (iC = 0; iC < size_2; iC++) {
		if (iA == size || iB == size) {
			C[iC] = (iB == size) ? A[iA++] : B[iB++];
			continue;
		}

		C[iC] = (A[iA] < B[iB]) ? A[iA++] : B[iB++];
	}
}
void array_print(int* A, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}printf("\n");
}