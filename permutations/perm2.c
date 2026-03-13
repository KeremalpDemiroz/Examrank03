#include "perm.h"

// int	ft_strlen(char *s)
// {
// 	int i = 0;
// 	if (!s)
// 		return (0);
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// char *ft_strdup(char *s)
// {
// 	int i = 0;
// 	if (!s)
// 		return (NULL);
// 	char *tmp = malloc(sizeof(char) * ft_strlen(s));
// 	if (!tmp)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		tmp[i] = s[i];
// 		i++;
// 	}
// 	tmp[i] = 0;
// 	return (tmp);
// }

// void	ft_swap(char *a,char *b)
// {
// 	char tmp;
// 	tmp = *a;
// 	*a = *b;
// 	*b = tmp;
// }

// void	sort_str(char *str)
// {
// 	int i;
// 	int j;
// 	int	len = ft_strlen(str);
// 	i = 0;
// 	while (i < len -1)
// 	{
// 		j = 0;
// 		while (j < len)
// 		{
// 			if (str[i] > str[j])
// 				ft_swap(&str[i], &str[j]);
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	print_str(char *str)
// {
// 	write(1, str, ft_strlen(str));
// 	write(1, "\n", 1);
// }

// void	perm(char *str, int start)
// {
// 	int	i;
// 	if (!str[start])
// 	{
// 		print_str(str);
// 		return ;
// 	}
// 	i = start;
// 	while (str[i])
// 	{
// 		ft_swap(str[start], str[i]);
// 		perm(str, start + 1);
// 		ft_swap(str[start], str[i]);
// 		i++;
// 	}
// 	return ;
// }

// int	main(int ac, char **av)
// {
// 	char *str;
// 	int start;
// 	int	i;

// 	i = 0;
// 	start = 0;
// 	if (ac != 2)
// 		return (1);
// 	str = ft_strdup(av[1]);
// 	if (!str)
// 		return (1);
// 	sort_str(str);
// 	perm(str, start);
// 	return (0);
// }

// int	ft_strlen(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }
// char	*ft_strdup(char *str)
// {
// 	char *tmp;
// 	int	len = ft_strlen(str);
// 	int i = 0;
// 	if (!str)
// 		return (NULL);
// 	tmp = malloc(sizeof(char) * len);
// 	if (!tmp)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		tmp[i] = str[i];
// 		i++;
// 	}
// 	tmp[i] = 0;
// 	return (tmp);
// }

// void	ft_swap(char *a, char *b)
// {
// 	char tmp;

// 	tmp = *a;
// 	*a = *b;
// 	*b = tmp; 
// }

// void	sort(char *str)
// {
// 	int	i;
// 	int	j;
// 	int	len;

// 	i = 0;
// 	len = ft_strlen(str);
// 	while (i < len -1)
// 	{
// 		j = 0;
// 		while (j < len)
// 		{
// 			if (str[i] > str[j])
// 				ft_swap(&str[i], &str[j]);
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	print_str(char *str)
// {

// 	write(1, str, ft_strlen(str));
// 	write(1, "\n", 1);
// }

// void	perm(char *str, int start)
// {
// 	int	i;

// 	if (!str[start])
// 	{
// 		print_str(str);
// 		return ;
// 	}
// 	i = start;
// 	while (str[i])
// 	{
// 		ft_swap(&str[start], &str[i]);
// 		perm(str, start + 1);
// 		ft_swap(&str[start], &str[i]);
// 		i++;
// 	}
// }

// int main(int ac, char **av)
// {
// 	char *str;
// 	if (ac != 2)
// 		return (1);
// 	str = ft_strdup(av[1]);
// 	if (!str)
// 		return (1);
// 	sort(str);
// 	perm(str, 0);
// }