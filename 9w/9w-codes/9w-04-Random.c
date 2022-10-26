//랜덤함수 초기화
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(void);
int main(void)
{
	
	for (int i = 0; i < 3; i++)
		printf("%d\n", get_random());

	return 0;
}
int get_random(void)
{
	static int inited = 0;
	if (inited == 0) 
	{
		srand((unsigned)time(NULL)); 
		printf("초기화 실행\n");
		inited++;
	}
	return rand();
}