#include<stdio.h>

#define NO 3

int main(void)
{
	int point[][2] = { 
		80, 80,
		100, 98,
		60, 80, };

	int i, j, sum = 0, p_sum[NO];
	double ave;

	//�p��̕��ϓ_�����߂�
	for (i = 0; i < NO; i++)
		sum += point[i][0];
	ave = (double)sum / NO;

	printf("�p��̕��ϓ_��%5.1f�_�ł�\n\n", ave);

	//���w�̕��ϓ_�����߂�
	sum = 0;

	for (i = 0; i < NO; i++)
		sum += point[i][1];
	ave = (double)sum / NO;

	printf("���w�̕��ϓ_��%5.1f�_�ł�\n\n", ave);

	//�l�ʍ��v�_�����߂�
	for (i = 0; i < NO; i++)
		p_sum[i] = 0;

	for (i = 0; i < NO; i++)
	{
		for (j = 0; j < 2; j++)
		{
			p_sum[i] += point[i][j];
		}
		printf("�o�Ȕԍ�%d�̑����_ %d\n", i + 1, p_sum[i]);
	}



	return 0;
}