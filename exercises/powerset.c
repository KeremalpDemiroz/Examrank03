#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check_int(char **str, int ac)
{
    int j = 1;
    while (j < ac)
    {
        int i = 0;
        if (str[j][i] == '-' || str[j][i] == '+')
            i++;
        while (str[j][i])
        {
            if (str[j][i] < '0' || str[j][i] > '9')
                return 0;
            i++;
        }
        j++;
    }
    return 1;
}

void solve(int *set, int size, int *subset, int sub_size, int index, int curr_sum, int target)
{
	int	i = 0;
	if (index == size)
	{
		if (curr_sum == target)
		{
			while (i < sub_size)
			{
				printf("%d", subset[i]);
				if(i != sub_size - 1)
					printf(" ");
				i++;
			}
			printf("\n");
		}
		return ;
	}
	solve(set, size, subset, sub_size, index + 1, curr_sum, target);
	subset[sub_size] = set[index];
	solve(set, size, subset, sub_size + 1, index + 1, curr_sum + set[index], target);
}

int main(int ac, char **av)
{
	int	i = 0;
	int target;
	int *set;
	int	subset[ac -2];

	if(ac > 3 || check_int(av, ac))
	{
		target = atoi(av[1]);
		set = malloc(sizeof(int) * (ac - 2));
		while (i < ac -2)
		{
			set[i] = atoi(av[i+2]);
			i++;
		}
		solve(set, (ac -2), subset, 0, 0, 0, target);
		free(set);	
		return 0;
	}
	return 1;
}