//05 학점을 점수로
#include <stdio.h>

#define SIZE 10
void convert(double* grades, double* scores, int size);
void array_print(double* A, int size);
int main()
{
	double grades[SIZE] = { 0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.3 },
		scores[SIZE] = { 0 };

	array_print(grades,SIZE);
	convert(grades, scores, SIZE);
	array_print(scores, SIZE);

	return 0;
}


void convert(double* grades, double* scores, int size) {
	double ratio = 100 / 4.3;  //grade to score 비율

	for (int i = 0; i < size; i++) {
		scores[i] = grades[i] * ratio;
	}
}
void array_print(double* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%05.2f ", A[i]);
	}printf("\n");
}