#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int	a, b, c, x;
	float	answer;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &x);

	if (x <= a)
	{
		answer = 1;
		printf("%f\n", answer);
	}
	else if (x > b)
	{
		answer = 0;
		printf("%f\n", answer);
	}
	else
	{
		answer = (float)c / (b - a);
		printf("%f\n", answer);
	}
	return (0);
}