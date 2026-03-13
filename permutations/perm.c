#include "perm.h"

static void	swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	sort_str(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] > s[j])
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	print_str(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	write(1, "\n", 1);
}

static void	permute(char *s, int start)
{
	int i;

	if (!s[start])
	{
		print_str(s);
		return;
	}
	i = start;
	while (s[i])
	{
		swap(&s[start], &s[i]);
		permute(s, start + 1);
		swap(&s[start], &s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char *str;
	int i = 0;

	if (argc != 2)
		return (0);

	while (argv[1][i])
		i++;

	str = malloc(i + 1);
	if (!str)
		return (0);

	i = 0;
	while (argv[1][i])
	{
		str[i] = argv[1][i];
		i++;
	}
	str[i] = '\0';

	sort_str(str);
	permute(str, 0);
	free(str);
	return (0);
}
