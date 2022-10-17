#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int get_dice_face(void);

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
		get_dice_face();
}

int get_dice_face(void) {
	static int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, count = 0;
	switch (rand() % 6) {
	case 0:d0++; break;
	case 1:d1++; break;
	case 2:d2++; break;
	case 3:d3++; break;
	case 4:d4++; break;
	case 5:d5++; break;
	}
	count++;
	if (count == 100)
		printf("1->%d\n2->%d\n3->%d\n4->%d\n5->%d\n6->%d\n", d0, d1, d2, d3, d4, d5);
}