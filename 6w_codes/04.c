//표준 체중
#include <stdio.h>
int main(void)
{
	float weight;
	float height;
	float std_weight;		//표준체중
	float std_per_weight;	//표준체중 대비 체중의 백분율

	printf("체중과 키를 입력하세요: ");
	scanf_s("%f %f", &weight, &height);

	std_weight = (height - 100) * 0.9;				// (키-100) x 0.9
	std_per_weight = (weight / std_weight) * 100;	// (체중/표준체중)*100

	if (std_per_weight < 90)		//표준 대비 90% 미만
		printf("저체중입니다.\n");	//저체중

	else if (std_per_weight <= 110)	//표준 대비 90%이상 110% 이하
		printf("표준체중입니다.\n");	//표준체중

	else							//표준 대비 110% 초과
		printf("과체중입니다.\n");	//과체중

	printf("표준 체중 대비 백분율: %f\n", std_per_weight);
	return 0;
}