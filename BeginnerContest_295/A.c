#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int		N;
	char	W[100][51];
	scanf("%d", &N);
	for (int i=0; i<N; i++)
	{
		scanf("%s", &W[i]);
	}
	for (int f=0; f<100-N; f++)
	{
		W[N+f][0] = '\0';
	}
	for (int k=0; k<N; k++)
	{
		if (strcmp(W[k], "and") == 0 || strcmp(W[k], "not") == 0 || strcmp(W[k], "that") == 0 || strcmp(W[k], "the") == 0 || strcmp(W[k], "you") == 0)
		{
			printf("Yes\n");
			return (0);
		}
	}
	printf("No\n");
	return (0);
}