#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned char seen[256];
	int i;
	int j;

	i = -1;
	if (ac == 3)
	{
		while (av[1][++i])
		{
			if (!seen[(unsigned char)av[1][i]])
			{
				write(1, &av[1][i], 1);
				seen[(unsigned char)av[1][i]] = 1;
			}
		}
		while (av[2][++j])
		{
			if (!seen[(unsigned char)av[2][j]])
			{
				write(1, &av[2][j], 1);
				seen[(unsigned char)av[2][j]] = 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
