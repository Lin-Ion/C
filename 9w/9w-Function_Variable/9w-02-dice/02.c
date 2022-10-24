//02 DiceFace Count

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face() {
	static int Face[6] = { 0 };
	static count = 0;
	
	Face[rand() % 6] += 1;
	count++;
	if (count == 100)
	{
		for (int i = 0; i < 6; i++)
			printf("%d->%d\n", i + 1, Face[i]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
		get_dice_face();
	
	return 0;
}