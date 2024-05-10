#include <stdio.h>
#include <unistd.h>

int	main(int arc, char *arv[])
{
	int	i;

	if (arc == 2)
	{
		i = 0;
		while (arv[1][i] != '\0')
			i++;
		while (arv[1][--i])
		{
			write(1, &arv[1][i], 1);
		}
		write(1, "\n", 1);
	}
}