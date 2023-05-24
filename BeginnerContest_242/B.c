#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char	word[200001];
	char	alfa;
	int		i;
	scanf("%s", word);
	for (int f = 0; f < 26; f++)
	{
		i = 0;
		while (word[i])
		{
			if (word[i] == 'a' + f)
			{
				printf("%c", word[i]);
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}