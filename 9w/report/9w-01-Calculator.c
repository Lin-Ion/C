//01 Calculator

#include <stdio.h>

int result = 0;

void Add(int a, int b);
void Sub(int a, int b);
void Mul(int a, int b);
void Div(int a, int b);

int main()
{
	int x, y;
	char op;
	while (1) {
		x = 0, y = 0, op = 'q';
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d %c %d", &x, &op,4, &y);

		switch (op)
		{
		case '+':
			Add(x, y);
			break;
		case '-':
			Sub(x, y);
			break;
		case '*':
			Mul(x, y);
			break;
		case '/':
			Div(x, y);
			break;
		default:
			printf("�Է¿���\n");
			return 0;
			break;
		}
		printf("���� ���: %d\n\n", result);
	}
	return 0;
}

void Add(int a, int b) {
	static int count=0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n",count);

	result = a + b;
}
void Sub(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

	result = a - b;
}
void Mul(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);

	result = a * b;
}
void Div(int a, int b) {
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);

	result = a / b;
}