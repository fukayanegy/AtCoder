#include<stdio.h>

int main(void)
{
	int b;
	char *a;
	scanf("%d", &b);

	a = malloc(sizeof(char) * (b+1));
	scanf("%s", a);

	for (int i = 0; i < b-1; i++)
	{
		if (a[i] == a[i+1])
		{
			printf("No\n");
			return (0);
		}
	}
	printf("Yes\n");
	return (0);
}