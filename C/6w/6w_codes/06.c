//도형 출력
#include <stdio.h>
int main(void)
{
	char shape;

	printf("문자를 입력하시오: ");
	shape = getchar() & ~0x20;	
	//32의 1의 보수(1011111)을 사용해서 소문자를 대문자로 변환
	//32비트 자리의 1을 0으로 만듬.

	switch (shape)
	{
	case 'R':
		printf("Rectangle");
		break;
	case 'T':
		printf("Triangle");
		break;
	case 'C':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}

	return 0;
}	


/*
 bin(32)
'0b0100000'
bin(ord('a'))	
'0b1100001'

소문자를 대문자로 바꾸고 싶다면,
32에 해당하는 비트를 0으로.
	1100001	
AND	1011111	
  =	1000001	 = 'A'	

bin(ord('A'))
'0b1000001'
대문자에 같은 연산을 한 경우.
	1000001
AND 1011111
  =	1000001	 = 'A'

*/
/*
 bin(32)
'0b0100000'
bin(ord('A'))
'0b1000001'

대문자를 소문자로 바꾸고 싶다면,
32에 해당하는 비트를 1으로.
	1000001
OR	0100000
  =	1100001	 = 'A'

bin(ord('a'))
'0b1000001'
소문자에 같은 연산을 한 경우.
	1100001
OR	0100000
  =	1100001	 = 'a'

*/
/*
 마스킹 결과 대문자 'A' 혹은 소문자 'a' 가 나오는 경우는
 입력값이 'A' 혹은 'a' 인 경우 밖에 없음을 파이썬에서 귀납적으로 실험함.

mask=~0x20

print("대문자 A가 나오는 경우")
for i in range(1,100000):
	if mask&i == ord('A'):
		print(f'i={i} chr({i})={chr(i)}')

print("\n소문자 a가 나오는 경우")
for j in range(1,100000):
	if ~mask|j == ord('a'): 0xDF
		print(f'j={j} chr({j})={chr(j)}')

print(f'\ni={i} j={j}')

*/
