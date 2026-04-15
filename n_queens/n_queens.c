#include <unistd.h>
#include <stdlib.h>

// // static void	print_solution(int *board, int n)
// // {
// // 	int i;
// // 	char c;

// // 	i = 0;
// // 	while (i < n)
// // 	{
// // 		c = board[i] + '0';
// // 		write(1, &c, 1);
// // 		if (i < n - 1)
// // 			write(1, " ", 1);
// // 		i++;
// // 	}
// // 	write(1, "\n", 1);
// // }

// // static int	is_safe(int *board, int col, int row)
// // {
// // 	int i = 0;

// // 	while (i < col)
// // 	{
// // 		if (board[i] == row)
// // 			return (0);
// // 		if (abs(board[i] - row) == abs(i - col))
// // 			return (0);
// // 		i++;
// // 	}
// // 	return (1);
// // }

// // static void	solve(int *board, int col, int n)
// // {
// // 	int row = 0;

// // 	if (col == n)
// // 	{
// // 		print_solution(board, n);
// // 		return;
// // 	}

// // 	while (row < n)
// // 	{
// // 		if (is_safe(board, col, row))
// // 		{
// // 			board[col] = row;
// // 			solve(board, col + 1, n);
// // 		}
// // 		row++;
// // 	}
// // }

// // int	main(int argc, char **argv)
// // {
// // 	int n;
// // 	int *board;

// // 	if (argc != 2)
// // 		return (0);

// // 	n = atoi(argv[1]);
// // 	if (n <= 0)
// // 		return (0);

// // 	board = malloc(sizeof(int) * n);
// // 	if (!board)
// // 		return (0);

// // 	solve(board, 0, n);
// // 	free(board);
// // 	return (0);
// // }

void	print_board(int *board, int n)
{
	int	i;
	char a;

	i = 0;
	while (i < n)
	{
		a = board[i] + '0';
		write(1, &a, 1);
		if (i != n -1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}
int	ft_abs(int a, int b)
{
	int	result;

	result = a - b;
	if (result < 0)
		return (result * -1);
	return (result);
}

int	is_safe(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		if (ft_abs(board[i], row) == ft_abs(i, col))
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

int main(int ac, char **av)
{
	int	*board;
	int	n;

	if (ac != 2)
		return (1);
	n = atoi(av[1]);
	board = malloc(sizeof(int) * n);
	if (!board)
		return (1);
	solve(board, 0, n);
	free(board);
	return (0);
}



