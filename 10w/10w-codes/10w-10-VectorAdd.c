//10 Vector add, product

#include <stdio.h>

#define SIZE 3

void vector_add(double x[],double y[], double z[]);
double vector_dot_product(double x[], double y[]);

int main()
{
	double x[SIZE] = { 1,2,3 };
	double y[SIZE] = { 1,2,3 };
	double z[SIZE];

	vector_add(x, y, z);
	printf("벡터의 합 = [%lf %lf %lf]\n", z[0], z[1], z[2]);
	
	printf("벡터의 내적 = %lf\n",vector_dot_product(x, y));


	return 0;
}

void vector_add(double x[], double y[], double z[])
{
	for (int i = 0; i < SIZE; i++)
		z[i] = x[i] + y[i];
}

double vector_dot_product(double x[], double y[])
{
	double result = 0;

	for (int i = 0; i < SIZE; i++)
		result += x[i] * y[i];

	return result;
}