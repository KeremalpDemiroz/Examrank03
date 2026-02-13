#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int filter(char *av)
{
	char	str[10000];
	int read_ret;
	int i;
	int j;
	int tmp_i;
	
	while (1)
	{
		read_ret = read(0, str, 10000);
		if (read_ret < 0)
		{
			perror("Error: read error");
			return -1;
		}
		if (read_ret == 0)
			break;
		str[read_ret] = 0;
		i = 0;
		while (str[i])
		{
			j = 0;
			while (av[j] && str[i+j] == av[j])
			{
				j++;
			}
			if (av[j])
			{
				write(1, &str[i], 1);
				i++;
			}
			else
			{
				tmp_i = i;
				while (str[i] && i < tmp_i + j)
				{
					write(1, "*", 1);
					i++;
				}
			}
		}
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac != 2 || !av[1] || av[1][0] == 0)
	{
		return (1);
	}
	if (filter(av[1]) < 0)
		return (1);
	write(1, "\n", 1);
}