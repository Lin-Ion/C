#include <stdio.h>

#define Pass 'P'
#define NonPass 'N'
#define Over 'O'

#define pswd 1234

int check(void);
int main(void)
{
	while (1) 
	{
		switch (check()) {
		case Pass:
			printf("���\n");
			return 0;
			break;
		case Over:
			printf("�ʰ�\n");
			return 0;
			break;
		case NonPass:
			continue;
		}
	}
	return 0;
}
int check(void)
{
	unsigned int tmp;
	static char count = 0;
	count++;
	printf("��й�ȣ: ");
	scanf_s("%ud", &tmp);
	if (pswd == tmp)
		return Pass;
	if (count == 3)
		return Over;
	return NonPass;
}