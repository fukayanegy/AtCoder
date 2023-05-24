#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char	c[101];
	int		i;
	scanf("%s", &c);

	while (c[i])
	{
		printf("%c", c[i] - 32);
		i++;
	}
	return (0);
}