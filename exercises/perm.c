#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b  = tmp;
}

void	sort_from(char *str, int from)
{
	int	i;
	int	j;

	i = from;
	while (i < ft_strlen(str) -1)
	{
		j = i + 1;
		while (j < ft_strlen(str))
		{
			ft_swap(&str[i], &str[j]);
			j++;	
		}
		i++;
	}
}

void	perm(char *str, int start)
{
	int	i;

	if (!str[start])
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
		return ;
	}
	i = start;
	while (str[i])
	{
		ft_swap(&str[start], &str[i]);
		sort_from(str, start + 1);
		perm(str, start + 1);
		i++;
	}
	sort_from(str, start);
}

int main(int ac, char **av)
{
	char	*str;
	int		i;

	i = 0;
	if (ac != 2)
		return (1);
	str = malloc(sizeof(char) *( ft_strlen(av[1]) + 1));
	if (!str)
		return (1);
	while (av[1][i])
	{
		str[i] = av[1][i];
		i++;
	}
	str[i] = '\0';
	sort_from(str, 0);
	perm(str, 0);
	free(str);
}