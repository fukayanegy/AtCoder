#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int	n, q, i, f;
	int	**memo;
	int	*player;
	int	print_char[101];

	for (i = 0; i < 101; i++)
	{
		print_char[i] = 0;
	}
	scanf("%d %d", &n, &q);
	memo = (int **)malloc(sizeof(int *) * q);
	for (i = 0; i < q; i++)
	{
		memo[i] = malloc(sizeof(int) * 2);
	}
	player = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		player[i] = 0;
	}
	f = 0;
	for (i = 0; i < q; i++)
	{
		scanf("%d %d", &memo[i][0], &memo[i][1]);
		if (memo[i][0] == 1)
		{
			player[memo[i][1] - 1] ++;
			//printf("player[%d]:%d:++\n", memo[i][1] - 1, player[memo[i][1] - 1]);
		}
		if (memo[i][0] == 2)
		{
			player[memo[i][1] - 1] += 2;
			//printf("player[%d]:%d:+2\n", memo[i][1] - 1, player[memo[i][1] - 1]);
		}
		if (memo[i][0] == 3)
		{
			if (player[memo[i][1] - 1] >= 2)
			{
				//printf("player[%d]:%d:Yes\n", memo[i][1] - 1, player[memo[i][1] - 1]);
				print_char[i]  = 1;
			}
			else
			{
				//printf("player[%d]:%d:No\n", memo[i][1] - 1, player[memo[i][1] - 1]);
				print_char[i] = 2;
			}
			f++;
		}
	}
	for (i = 0; i < 101; i++)
	{
		if (print_char[i] == 1)
		{
			printf("Yes\n");
		}
		else if (print_char[i] == 2)
		{
			printf("No\n");
		}
	}
	return (0);
}