#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// // int filter(char *av)
// // {
// // 	char	str[10000];
// // 	int read_ret;
// // 	int i;
// // 	int j;
// // 	int tmp_i;
	
// // 	while (1)
// // 	{
// // 		read_ret = read(0, str, 10000);
// // 		if (read_ret < 0)
// // 		{
// // 			perror("Error: read error");
// // 			return -1;
// // 		}
// // 		if (read_ret == 0)
// // 			break;
// // 		str[read_ret] = 0;
// // 		i = 0;
// // 		while (str[i])
// // 		{
// // 			j = 0;
// // 			while (av[j] && str[i+j] == av[j])
// // 			{
// // 				j++;
// // 			}
// // 			if (av[j])
// // 			{
// // 				write(1, &str[i], 1);
// // 				i++;
// // 			}
// // 			else
// // 			{
// // 				tmp_i = i;
// // 				while (str[i] && i < tmp_i + j)
// // 				{
// // 					write(1, "*", 1);
// // 					i++;
// // 				}
// // 			}
// // 		}
// // 	}
// // 	return 0;
// // }

// // int main(int ac, char **av)
// // {
// // 	if (ac != 2 || !av[1] || av[1][0] == 0)
// // 	{
// // 		return (1);
// // 	}
// // 	if (filter(av[1]) < 0)
// // 		return (1);
// // 	write(1, "\n", 1);
// // }





















// // int	filter(char *str)
// // {
// // 	char	input[10001];
// // 	ssize_t	read_size;
// // 	int	i;
// // 	int j;
// // 	int	temp_i;

// // 	while (1)
// // 	{
// // 		i = 0;
// // 		read_size = read(0, input, 10000);
// // 		if (read_size < 0)
// // 		{
// // 			perror("Error: read error");	
// // 			return (-1);
// // 		}
// // 		if (read_size == 0)
// // 			break ;
// // 		input[read_size] = '\0';
// // 		while (input[i])
// // 		{
// // 			j = 0;
// // 			while (str[j] && input[i + j] == str[j])
// // 				j++;
// // 			if (str[j])
// // 			{
// // 				write(1, &input[i], 1);
// // 				i++;
// // 			}
// // 			else
// // 			{
// // 				temp_i = i;
// // 				while (input[i] && i < j + temp_i)
// // 				{
// // 					write(1, "*", 1);
// // 					i++;
// // 				}
// // 			}
// // 		}
// // 	}
// // 	return (0);
// // }	




// // int	filter(char *word)
// // {
// // 	char	b[10001];
// // 	ssize_t read_ret;

// // 	int i;
// // 	int j;
// // 	int tmp;

// // 	while (1)
// // 	{
// // 		i  = 0;
// // 		read_ret = read(0, b, 10000);
// // 		if (read_ret < 0)
// // 		{
// // 			perror("Error: read error");	
// // 			return (-1);
// // 		}
// // 		if (read_ret == 0)
// // 			break ;
// // 		b[read_ret] = 0;
// // 		while (b[i])
// // 		{
// // 			j = 0;
// // 			while (word[j] && b[i + j] == word[j])
// // 				j++;
// // 			if (word[j])
// // 			{
// // 				write(1, &b[i], 1);
// // 				i++;
// // 			}
// // 			else
// // 			{
// // 				tmp = i;
// // 				while (b[i] && i < tmp + j)
// // 				{
// // 					write(1, "*", 1);
// // 					i++;
// // 				}
// // 			}
// // 		}
// // 	}
// // 	return (0);
// // }




// // int  main(int ac, char **av)
// // {
// // 	if (ac != 2 || !av[1] || !av[1][0])
// // 		return (1);
// // 	if (filter(av[1]) < 0)
// // 		return (1);
// // 	printf("\n");
// // 	return (0);
// // }





// //filter kodu
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

// int ft_strcmp(const char *s1, const char *s2)
// {
//     int i = 0;
//     while (s1[i] && s2[i] && s1[i] == s2[i])
//         i++;
//     return (s2[i] == '\0');
// }

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//         return 1;
//     char *buffer = NULL;
//     char c;
//     int len = 0;
//     int i = 0;
//     int find_len = strlen(argv[1]);
//     buffer = malloc(find_len);
//     if(!buffer)
//         return 1;
//     while (read(0, &c, 1) > 0)
//     {
//         buffer = realloc(buffer, len + 2);
//         if (!buffer)
//             return 1;
//         buffer[len] = c;
//         len++;
//         buffer[len] = '\0';
//     }
//     while (i < len)
//     {
//         if (ft_strcmp(&buffer[i], argv[1]))
//         {
//             int j = 0;
//             while (j < find_len)
//             {
//                 write(1, "*", 1);
//                 j++;
//             }
//             i += find_len;
//         }
//         else
//         {
//             write(1, &buffer[i], 1);
//             i++;
//         }
//     }
//     free(buffer);
//     return 0;
// }


int	filter(char *str)
{
	int		i;
	int		j;
	int		temp_i;
	int		len = 0;
	char	c;
	char	*input;

	i = 0;
	while (read(0, &c, 1) > 0)
	{
		input = realloc(input, len + 1);
		if (!input)
			return (-1);
		input[len] = c;
		len++;
		input[len] = 0;
	}
	while (input[i])
	{
		j = 0;
		while (str[j] && input[i + j] && str[j] == input[j + i])
			j++;
		if (str[j])
		{

			write(1, &input[i], 1);
			i++;
		}
		else
		{
			temp_i = i;
			while (i < temp_i + j)
			{
				write(1, "*", 1);
				i++;
			}
		}
	}
	free(input);
	return (1);
}


int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (!av[1] || !av[1][0])
		return (1);
	if (filter(av[1]) < 0)
		return (1);
}