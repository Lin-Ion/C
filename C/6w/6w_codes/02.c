//가장 작은 값
#include <stdio.h>
int main(void)
{
	int x,y,z;	// x,y,z
	int min = 0;
	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x < y)
		min = x;	// x<y 라면 x 저장
	else
		min = y;	// y<x 라면 y 저장

	if (z < min)
		min = z;	//x, y중 낮은 값을 z와 비교

	printf("제일 작은 정수는 %d입니다.\n",min);

	return 0;
}