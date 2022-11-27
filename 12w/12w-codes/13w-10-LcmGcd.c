//10 최대공약수 최소공배수
#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);
int get_gcd(int x, int y);

int main(void)
{
	int x, 
		y, 
		lcm, 
		gcd;
	
	printf("두 개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);

	return 0;
}
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) 
{
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / (*p_gcd); 
}
int get_gcd(int x, int y)	//유클리드 호재법
{
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}