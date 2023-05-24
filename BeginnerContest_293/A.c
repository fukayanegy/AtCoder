#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char	a[101];
	char	b;
	int		i;

	scanf("%s", a);
	i = 0;
	while (i < 51)
	{
		b = a[i * 2];
		a[i * 2] = a[i * 2 + 1];
		a[i * 2 + 1] = b;
		i++;
	}
	printf("%s\n", a);
	return (0);
}