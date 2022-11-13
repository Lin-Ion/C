//13 Decimal to Binary
#include <stdio.h>

#define SIZE 32

int main()
{
	unsigned int decimal = 32;
	__int8 binary[SIZE];
	int i;

	printf("%u -> ", decimal);

	for (i = 0; i < 32 && decimal>0; i++) {
		binary[i] = decimal & 1;
		decimal = decimal >> 1;
	}i--;

	for (i; i >= 0; i--)
		printf("%d", binary[i]);

	return 0;
}
