//로그인 횟수제한
#include <stdio.h>

#define Pass 1
#define Fail 0

#define pswd 1234	//고정된 비밀번호

unsigned __int8 count_over = 0;	//로그인(시도) 자격

int check(void);

int main(void)
{
	while (count_over==0) 
	{
		if (check() == Pass)
			break;
	}
	
	return 0;
}

int check(void)
{
	static unsigned __int8 count = 0;	//정적 부호없는 8비트 카운트
	unsigned int input;

	if (count >= 3){
		count_over = 1;
		printf("로그인 시도 횟수 초과\n");
		return Fail;
	}
	count++;	//로그인 시도 횟수 1 증가

	printf("비밀번호: ");
	scanf_s("%ud", &input);

	if (pswd == input){		//비밀번호 일치 여부 확인
		printf("로그인 성공\n");
		return Pass;	
	}
	else 
		return Fail;
}