#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;
		int	j;

		i = 0;
		while (argv[1][i] != '\0')
		{
			// printf("[%d] : %c\n", i, argv[1][i]);
			// printf("[%d] : %d : %d\n",i, argv[1][i], (argv[1][i] - 64));
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = 0;

				while (j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = 0;

				while (j < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			i++;
		}
		write(1, "\n", 1);
	}
}