//12 matrix multiply transpose
#include <stdio.h>

#define SIZE 3

void matrix_print(const int a[][SIZE]);
void scalar_mult(int a[][SIZE], int scalar);
void transpose(int a[][SIZE], int b[][SIZE]);
void matrix_reset(int a[][SIZE]);

int main()
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];

	//행렬 스칼라곱
	matrix_reset(a);
	scalar_mult(a, 2);
	matrix_print(a);

	//전치행렬
	matrix_reset(a);
	transpose(a, b);
	matrix_print(b);

	return 0;
}

void matrix_print(const int a[][SIZE]) 
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}printf("\n");
}

void scalar_mult(int a[][SIZE], int scalar)
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			a[i][j] *= scalar;
}

void transpose(int a[][SIZE], int b[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			b[i][j] = a[j][i];
}

void matrix_reset(int a[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			a[i][j] = (SIZE * i) + j + 1;
}