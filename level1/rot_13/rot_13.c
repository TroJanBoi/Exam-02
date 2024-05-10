#include <stdio.h>
#include <unistd.h>

int	main(int arc, char *arv[])
{
	int		i;

	i = 0;
	if (arc == 2)
	{
		while (arv[1][i])
		{
			if ((arv[1][i] >= 'a' && arv[1][i] <= 'm') || (arv[1][i] >= 'A' && arv[1][i] <= 'M'))
				arv[1][i] += 13;
			else if ((arv[1][i] >= 'n' && arv[1][i] <= 'z') || (arv[1][i] >= 'N' && arv[1][i] <= 'Z'))
				arv[1][i] -= 13;
			write(1, &arv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}