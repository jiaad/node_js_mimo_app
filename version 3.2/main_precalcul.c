#include <stdio.h>

char ****precalcul(int n, int maxposs);

int main()
{
	int i;
	int j;
	int k;
	char ****result;
	result = precalcul (4, 17);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("possibilities for %d, %d\n", i, j);
			k = 0;
			while (result[i][j][k])
				printf("%s\n", result[i][j][k++]);
			j++;
		}
		i++;
	}
	return (0);
}
