#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define N 20
int main()
{
	int i, num, Z = 0, F = 0, L = 0;
	int z_sum = 0, F_sum = 0;

	for (i = 1; i <= N; i++)
	{
		printf("�������%d������", i);
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
		printf("\n��������Z=%d,\n��������F=%d,\n�����L=%d", Z, F, L);
		printf("\n����֮��%d������֮��%d\n", z_sum, F_sum);
	}double z_sum_avg = z_sum / Z; double F_sum_avg = F_sum / F;
		printf("����ƽ��ֵ%.2f", z_sum_avg);
		printf("����ƽ��ֵ%.2f", F_sum_avg);


}

