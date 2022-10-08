//다항 함수 계산
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;

	printf("{ x²-9x+2 (x≤0)\n{ 7x+2 (x<0)\n");
	printf("x의 값을 입력하시오: ");

	scanf_s("%f", &x);
	
	if (x <= 0)
		y = pow(x, 2) + (-9 * x) + (2);	//x^2 -9x +2
	else
		y = (7 * x) + (2);	//7x +2
	
	printf("f(x)의 값은 %f",y);

	return 0;
}