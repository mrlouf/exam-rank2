#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	count_words(char *str)
{
	int i = -1;
	int count;

	count = 0;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

char	*substr(char *str, int start, int len)
{
	char *sub;
	int i = -1;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	sub[len] = '\0';
	while (++i <= len)
		sub[i] = str[start + i];
	return (sub);
}

char	**get_words(char **array, char *str)
{
	int i = -1;
	int j = 0;
	int len = 0;

	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			len++;
		if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
		{	
			array[j] = substr(str, i - len + 1, len - 1);
			len = 0;
			j++;
		}
	}
	return (array);
}

char	**split(char *str)
{
	char **array;
	int count;

	count = count_words(str);
	array = (char **)malloc(sizeof(char*) * (count + 1));
	array[count] = '\0';
	array = get_words(array, str);
	return (array);
}

int	main(int ac, char **av)
{
	int i = 0;
	int j = -1;
	char **array;

	if (ac >= 2)
	{
		array = split(av[1]);
		while (array[++i])
		{
			while (array[i][++j])
				write(1, &array[i][j], 1);
			write(1, " ", 1);
			j = - 1;
		}
		j = -1;
		while (array[0][++j])
			write(1, &array[0][j], 1);
	}
	write(1, "\n", 1);
}
