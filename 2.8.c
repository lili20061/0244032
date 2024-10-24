#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define N 20
int main()
{
	int i, num, Z = 0, F = 0, L = 0;
	int z_sum = 0, F_sum = 0;

	for (i = 1; i <= N; i++)
	{
		printf("请输入第%d个整数", i);
		scanf("%d", &num);
		if (num == 0)
			L++;

		else if (num > 0)

		{
			Z++; z_sum = z_sum + num;
		}

		else if (num < 0)
		{
			F++; F_sum = F_sum + num;

		}
		printf("\n正数个数Z=%d,\n负数个数F=%d,\n零个数L=%d", Z, F, L);
		printf("\n正数之和%d，负数之和%d\n", z_sum, F_sum);
	}double z_sum_avg = z_sum / Z; double F_sum_avg = F_sum / F;
		printf("正数平均值%.2f", z_sum_avg);
		printf("负数平均值%.2f", F_sum_avg);


}

