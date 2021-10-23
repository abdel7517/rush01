#include <unistd.h>

void	ft_showmap(int **map, int l, int c)
{
	int col;
	int li;
	int colun;
	int line;
	int space;
	int last;
	
	last = c - 1;
	col = 0;
	li = 0;
	space = 32;
	while (li < l)
	{
		while (col < c)
		{
			if ((col != 0) && (col != (c - 1)))
			{
				colun = map[li][col] + 48;
				write(1, &colun, 1);
				write(1, &space, 1);
			}
			col++;
		}
		write(1, "\n", 1);
		li++;
		col = 0;
	}
}
