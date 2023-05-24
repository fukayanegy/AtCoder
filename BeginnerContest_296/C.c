#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, x;
	int *num;
	scanf("%d %d", &n, &x);
	num = malloc(sizeof(int) * n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0; i<n; i++)
	{
		if (num[i] <= x)
			continue;
		for(int f=0; f<n; f++)
		{
				if (num[i] - num[f] == x)
				{
					printf("Yes\n");
					return(0);
				}
		}
	}
	printf("No\n");
	return (0);
}