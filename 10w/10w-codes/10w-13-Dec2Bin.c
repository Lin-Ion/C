//13 Decimal to Binary
#include <stdio.h>

#define SIZE 32

int main()
{
	int decimal = 50;
	int binary[SIZE];
	int i;

	printf("%d -> ", decimal);

	for (i = 0; i < 32 && decimal>0; i++) {
		binary[i] = decimal % 2;
		decimal = decimal >> 1;
	}i--;

	for (i; i >= 0; i--)
		printf("%d", binary[i]);

	return 0;
}
