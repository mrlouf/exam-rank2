#include <stdio.h>
#include "flood_fill.h"

void	fill(char **tab, t_point size, int row, int col, char to_fill)
{
	if (col < 0 || col >= size.x || row < 0 || row >= size.y || tab[row][col] != to_fill)
		return ;

	tab[row][col] = 'F';

	fill(tab, size, row + 1, col, to_fill);
	fill(tab, size, row - 1, col, to_fill);
	fill(tab, size, row, col + 1, to_fill);
	fill(tab, size, row, col - 1, to_fill);

}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin.y, begin.x, tab[begin.y][begin.x]);
}

// x = col = 8
// y = row = 5 > point[y][x];
