// 04 Array Copy
#include <stdio.h>

#define SIZE 10

void array_copy(int a[], int b[], int size);
void array_print(int a[], int size);

int main() {
	int a[SIZE] = { 1,2,3, };
	int b[SIZE] = { 0, };

	printf("===복사 전===\n");
	array_print(a, SIZE);
	array_print(b, SIZE);

	array_copy(a, b, SIZE);

	printf("===복사 후===\n");
	array_print(a, SIZE);
	array_print(b, SIZE);


	return 0;
}

void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
		b[i] = a[i];
}

void array_print(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);

	printf("\n");
}