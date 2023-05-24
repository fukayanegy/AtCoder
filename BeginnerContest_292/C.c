#include<stdio.h>
#include<stdlib.h>

int	sqer(int num);
int	sqer2(int num);

int	plus(int num);

int main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d\n",plus(n));
	// printf("%d\n",sqer(n));
	// printf("%d\n",sqer2(n));
	// for (int i = 0; i < n; i++)
	// {
	// 	if (sqer(i) != sqer2(i))
	// 	{
	// 		printf("%d:sqer:%d,", i,sqer(i));
	// 		printf("sqer2:%d\n", sqer2(i));
	// 	}
	// }

	return (0);
}

int	sqer(int num)
{
	int	answer;
	int	i, f;

	answer = 0;

	if (num == 0 || num == 1 || num == 2)
	{
		return (num);
	}
	i = 1;
	f = 0;
	while (i * i <= num)
	{
		if (num % i == 0)
		{
			answer++;
		}
		if (i * i == num)
		{
			f = 1;
		}
		i++;
	}
	answer *= 2;
	if (f == 1)
		answer -= 1;
	return (answer);

}

int	sqer2(int num)
{
	int	answer;
	int	i, f;
 
	answer = 0;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			answer++;
		}
		// for (f = 1; f <= (num + 1 - i); f++)
		// {
		// 	if (i * f == num)
		// 	{
		// 		answer++;
		// 	}
		// }
	}
	return (answer);
}

int	plus(int num)
{
	int	answer;
	int	i;

	answer = 0;
	for (i = 1; i <= num; i++)
	{
		answer += sqer(i) * sqer(num - i);
		// if (sqer(i) != sqer2(i))
		// {
		// 	printf("%d:sqer:%d,", i,sqer(i));
		// 	printf("sqer2:%d\n", sqer2(i));
		// }
	}
	return (answer);
}
