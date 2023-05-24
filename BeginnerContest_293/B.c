#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int	N;
	int	i;
	int	answer;
	int	*array;
	scanf("%d", &N);
	array = malloc(sizeof(int) * (N));
	int	*array2;
	array2 = malloc(sizeof(int) * (N));
	for (i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
		array2[i] = 0;
	}
	for (i = 0; i < N; i++)
	{
		if (array2[i] == 0)
		{
			array2[array[i]] ++;
		}
	}
	for (i = 0; i < N; i++)
	{
		if (array2[i] == 0)
			answer++;
	}
	printf("%d\n",answer);
	for (i = 0; i <= answer; i++)
	{
		if (i == answer)
		{
			printf("%d", array[i]);
		}
		else if (array[i] == 0)
		{
			printf("%d", array[i]);
			printf(" ");
		}
	}
	return (0);
}