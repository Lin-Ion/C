//���� �Լ� ���
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;

	printf("{ x��-9x+2 (x��0)\n{ 7x+2 (x<0)\n");
	printf("x�� ���� �Է��Ͻÿ�: ");

	scanf_s("%f", &x);
	
	if (x <= 0)
		y = pow(x, 2) + (-9 * x) + (2);	//x^2 -9x +2
	else
		y = (7 * x) + (2);	//7x +2
	
	printf("f(x)�� ���� %f",y);

	return 0;
}