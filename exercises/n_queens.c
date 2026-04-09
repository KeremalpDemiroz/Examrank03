#include <unistd.h>
#include <stdlib.h>

void	print_board(int *board, int n)
{
	int	i = 0;
	char a;

	while (i < n)
	{
		a = board[i] + 48;
		write(1, &a, 1);
		if (i + 1 != n)
			write(1 ," ", 1);
		i++;
	}
	write(1, "\n", 1);
}
int	ft_abs(int a, int b)
{
	if (a - b < 0)
		return (-(a - b));
	else
		return (a - b);
}

int	is_safe(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		if  (ft_abs(board[i], row) == ft_abs(i, col))
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *board, int col, int n)
{
	int	row;

	row = 0;
	if (col == n)
	{
		print_board(board, n);
		return ;
	}
	while (row < n)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, n);
		}
		row++;
	}
}
int	main(int ac, char **av)
{
	int	*board;
	int	n;

	if (ac != 2)
		return (1);
	n = atoi(av[1]);
	if (n <= 3)
		return (1);
	board = malloc(sizeof(int) * n);
	if (!board)
		return (1);
	solve(board, 0, n);
	free(board);
	return (0);
}