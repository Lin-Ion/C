// 03 Array Equal
#include <stdio.h>

#define SIZE 10

int array_equal(int a[], int b[], int size);
void array_print(int a[], int size);

int main(){
	int a[SIZE] = { 1,2,3, };
	int b[SIZE] = { 0, };

	array_print(a, SIZE);
	array_print(b, SIZE);

	switch (array_equal(a, b, SIZE)) {
	case 1:
		printf("2개의 배열은 같음\n"); break;
	case 0:
		printf("2개의 배열은 다름\n"); break;
	}
	
	return 0;
}

int array_equal(int a[], int b[], int size) 
{
	for (int i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;

	return 1;
}

void array_print(int a[],int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);

	printf("\n");
}