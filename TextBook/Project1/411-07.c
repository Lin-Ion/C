#include <stdio.h>
void show_digit(int x);
int main() 
{
	int num = 561231561;
	show_digit(num);

	return 0;
}
void show_digit(int x)
{
	if (x <= 9)
		printf("%d ", x);
	else 
	{
		show_digit(x / 10);
		printf("%d ", (x % 10));
	}
}