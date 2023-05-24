#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a[8][8];
	int b;
	int c;
	for (int i = 0; i< 8; i++)
	{
		scanf("%s", a[i]);
	}
	for (int i = 0; i< 8; i++)
	{
		for (int f = 0; f< 8; f++)
		{
			if (a[i][f] == '*')
			{
				b = i;
				c = f;
			}
		}

	}
	printf("%c%d", 'a' + c, 8-b);
	return (0);
}