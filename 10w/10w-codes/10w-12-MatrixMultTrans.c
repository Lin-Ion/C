//12 matrix multiply transpose
#include <stdio.h>

#define SIZE 3

void matrix_print(int a[][SIZE]);
void scalar_mult(int a[][SIZE], int scalar);
void transpose(int a[][SIZE], int b[][SIZE]);
void matrix_reset1(int a[][SIZE]);
void matrix_reset2(int a[][SIZE]);

int main()
{
	//행렬 스칼라곱
	int a[SIZE][SIZE] =
	{
		1,2,3,
		4,5,6,
		7,8,9
	};

	scalar_mult(a, 2);
	matrix_print(a);


	//전치행렬
	matrix_reset1(a);
	int b[SIZE][SIZE];

	transpose(a, b);
	matrix_print(b);


	//배열 초기화 함수
	printf("배열초기화 1\n");
	matrix_reset1(a);
	matrix_print(a);

	printf("배열초기화 2\n");
	matrix_reset2(a);
	matrix_print(a);


	return 0;
}

void matrix_print(int a[][SIZE])
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
			a[i][j] = scalar * a[i][j];
}

void transpose(int a[][SIZE], int b[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			b[j][i] = a[i][j];
}

void matrix_reset1(int a[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			a[i][j] = (SIZE * i) + j + 1;
}

void matrix_reset2(int a[][SIZE])
{
	int count = 1;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			a[i][j] = count++;
}