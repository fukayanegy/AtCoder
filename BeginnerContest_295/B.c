#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int		R, C;
	char	bored[20][20];
	scanf("%d", &R);
	scanf("%d", &C);
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < 20; k++)
		{
			bored[i][k] = '.';
		}
	}
	for (int i = 0; i < R; i++)
	{
		scanf("%s", &bored[i]);
	}
	for (int i = 0; i < R; i++)
	{
		for (int k = 0; k < C; k++)
		{
			for (int f = 1; f <= 9; f++)
			{
				if (bored[i][k] == '0' + f)
				{
					for (int a = 0; a < R; a++)
					{
						for (int b = 0; b < C; b++)
						{
							if (abs(i - a) + abs(k - b) <= f)
							{
								if (bored[a][b] == '.' || bored[a][b] == '#')
									bored[a][b] = '.';
							}
						}
					}
				}
			}

		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int k = 0; k < C; k++)
		{
			for (int f = 1; f <= 9; f++)
			{
				if (bored[i][k] == '0' + f)
				{
					bored[i][k] = '.';
				}
			}

		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int k = 0; k < C; k++)
		{
			printf("%c", bored[i][k]);
		}
		printf("\n");
	}
	return (0);
}