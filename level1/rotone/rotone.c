#include <stdio.h>
#include <unistd.h>

int	main(int arc, char *arv[])
{
	int	i;

	if (arc == 2)
	{
		i = 0;
		while (arv[1][i])
		{
			if (arv[1][i] == 'z' || arv[1][i] == 'Z')
				arv[1][i] -= 25;
			else if ((arv[1][i] >= 'a' && arv[1][i] <= 'y') || (arv[1][i] >= 'A' && arv[1][i] <= 'Y'))
				arv[1][i] += 1;
			write(1, &arv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}