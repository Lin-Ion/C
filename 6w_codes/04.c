//ǥ�� ü��
#include <stdio.h>
int main(void)
{
	float weight;
	float height;
	float std_weight;		//ǥ��ü��
	float std_per_weight;	//ǥ��ü�� ��� ü���� �����

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf_s("%f %f", &weight, &height);

	std_weight = (height - 100) * 0.9;				// (Ű-100) x 0.9
	std_per_weight = (weight / std_weight) * 100;	// (ü��/ǥ��ü��)*100

	if (std_per_weight < 90)		//ǥ�� ��� 90% �̸�
		printf("��ü���Դϴ�.\n");	//��ü��

	else if (std_per_weight <= 110)	//ǥ�� ��� 90%�̻� 110% ����
		printf("ǥ��ü���Դϴ�.\n");	//ǥ��ü��

	else							//ǥ�� ��� 110% �ʰ�
		printf("��ü���Դϴ�.\n");	//��ü��

	printf("ǥ�� ü�� ��� �����: %f\n", std_per_weight);
	return 0;
}