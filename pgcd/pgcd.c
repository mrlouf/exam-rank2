#include <stdio.h>
#include <stdlib.h>

int	pgcd(int one, int two)
{
	while (one != two)
	{
		if (one > two)
			one -= two;
		else
			two -= one;
	}
	return (one);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int one = atoi(av[1]);
		int two = atoi(av[2]);
		printf("%d", pgcd(one, two));
	}
	printf("\n");
}
