//로그인 횟수제한
#include <stdio.h>

#define Pass 1
#define Fail 0

#define pswd 1234

int login_over = 0;	
//로그인 자격은 전역변수이어야 함.
//로그인 자격을 초기화 하거나, 
//로그인 자격을 다른 함수(main)에서도 사용하려면 전역변수로 선언 해야함.

int check(void);

int main(void)
{
	do
	{
		if (check() == Pass)
			break;
	} while (login_over == 0);
}

int check(void)
{
	static int count = 0;
	unsigned int input;

	if (count == 3) //앞에 위치해야 오버플로우를 방지가능
	{
		login_over = 1;
		printf("로그인 시도 횟수 초과\n");
		return Fail;
	}
	count++;

	printf("비밀번호: ");
	scanf_s("%ud", &input);

	if (pswd == input) 
	{
		printf("로그인 성공\n");
		return Pass;
	}
	else 
		return Fail;
}