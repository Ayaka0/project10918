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

	//英語の平均点を求める
	for (i = 0; i < NO; i++)
		sum += point[i][0];
	ave = (double)sum / NO;

	printf("英語の平均点は%5.1f点です\n\n", ave);

	//数学の平均点を求める
	sum = 0;

	for (i = 0; i < NO; i++)
		sum += point[i][1];
	ave = (double)sum / NO;

	printf("数学の平均点は%5.1f点です\n\n", ave);

	//個人別合計点を求める
	for (i = 0; i < NO; i++)
		p_sum[i] = 0;

	for (i = 0; i < NO; i++)
	{
		for (j = 0; j < 2; j++)
		{
			p_sum[i] += point[i][j];
		}
		printf("出席番号%dの総得点 %d\n", i + 1, p_sum[i]);
	}



	return 0;
}