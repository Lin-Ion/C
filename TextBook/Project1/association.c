#include <stdio.h>
int main(){
	
	int x = 0, y = 0,result=0;
	result = - ++x + y--;
	result = x = y = 1;
	result = -++x + y--;
	printf("%d\n", result);

	return 0;
}