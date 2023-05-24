#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	int *A;
	A = malloc(sizeof(int)*(N));
	for (int i=0; i< N; i++)
	{
		scanf("%d", &A[i]);
	}
	int answer = 0;
	int a = 0;
	for (int i=1; i<N; i++)
	{
		for (int k=1; k<N; k++)
		{
			if (A[i] == A[k] && i != k)
			{
				A[k] = 0;
				a++;
			}
			answer += (a-1)/2;
		}
	}
	printf("%d", answer);
	return (0);
}