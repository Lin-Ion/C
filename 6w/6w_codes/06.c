//���� ���//https://neroren.tistory.com/97
#include <stdio.h>
int main(void)
{
	char shape;

	printf("���ڸ� �Է��Ͻÿ�: ");
	shape = getchar() & ~0x20;	
	//32�� 1�� ����(1011111)�� ����ؼ� �ҹ��ڸ� �빮�ڷ� ��ȯ
	//32��Ʈ �ڸ��� 1�� 0���� ����.

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

�ҹ��ڸ� �빮�ڷ� �ٲٰ� �ʹٸ�,
32�� �ش��ϴ� ��Ʈ�� 0����.
	1100001	
AND	1011111	
  =	1000001	 = 'A'	

bin(ord('A'))
'0b1000001'
�빮�ڿ� ���� ������ �� ���.
	1000001
AND 1011111
  =	1000001	 = 'A'

*/
/*
 bin(32)
'0b0100000'
bin(ord('A'))
'0b1000001'

�빮�ڸ� �ҹ��ڷ� �ٲٰ� �ʹٸ�,
32�� �ش��ϴ� ��Ʈ�� 1����.
	1000001
OR	0100000
  =	1100001	 = 'A'

bin(ord('a'))
'0b1000001'
�ҹ��ڿ� ���� ������ �� ���.
	1100001
OR	0100000
  =	1100001	 = 'a'

*/
/*
 ����ŷ ��� �빮�� 'A' Ȥ�� �ҹ��� 'a' �� ������ ����
 �Է°��� 'A' Ȥ�� 'a' �� ��� �ۿ� ������ ���̽㿡�� �ͳ������� ������.

mask=~0x20

print("�빮�� A�� ������ ���")
for i in range(1,100000):
	if mask&i == ord('A'):
		print(f'i={i} chr({i})={chr(i)}')

print("\n�ҹ��� a�� ������ ���")
for j in range(1,100000):
	if ~mask|j == ord('a'): 0xDF
		print(f'j={j} chr({j})={chr(j)}')

print(f'\ni={i} j={j}')

*/