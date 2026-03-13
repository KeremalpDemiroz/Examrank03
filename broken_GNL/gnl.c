#include "gnl.h"

// // char	*ft_strchr(char *s, int c)
// // {
// // 	int	i;

// // 	i = 0;
// // 	if (!s)
// // 		return (NULL);
// // 	while (s[i])
// // 	{
// // 		if (s[i] == (char)c)
// // 			return (s + i);
// // 		i++;
// // 	}
// // 	if (c == 0)
// // 		return (s + i);
// // 	return NULL;
// // }

// // void	*ft_memcpy(void *dest, const void *src, size_t n)
// // {
// // 	size_t i;

// // 	i = 0;
// // 	if (!dest)
// // 		return (NULL);
// // 	while (i < n)
// // 	{
// // 		((char *)dest)[i] = ((char *)src)[i];
// // 		i++;
// // 	}
// // 	((char *)dest)[i] = 0;
// // 	return (dest);
// // }

// // size_t	ft_strlen(char *s)
// // {
// // 	size_t	i;

// // 	i = 0;
// // 	if (!s)
// // 		return (0);
// // 	while (s[i])
// // 	{
// // 		i++;
// // 	}
// // 	return (i);
// // }

// // int	str_append_mem(char **s1, char *s2, size_t size2)
// // {
// // 	char	*tmp;
// // 	size_t	size1;

// // 	size1 = ft_strlen(*s1);
// // 	if (!s2)
// // 		return (0);
// // 	tmp = malloc(size1 + size2 +1);
// // 	if (!tmp)
// // 		return (0);
// // 	if (*s1)
// // 		ft_memcpy(tmp, *s1, size1);
// // 	ft_memcpy(tmp + size1, s2, size2);
// // 	tmp[size1 + size2] = 0;
// // 	free(*s1);
// // 	*s1 = tmp;
// // 	return (1);
// // }

// // int	str_append_str(char **s1, char *s2)
// // {
// // 	return (str_append_mem(s1, s2, ft_strlen(s2)));
// // }

// // void	*ft_memmove(void *dest, const void *src, size_t n)
// // {
// // 	size_t	i;

// // 	i = n-1;
// // 	if (src > dest)
// // 		return (ft_memcpy(dest, src, n));
// // 	else if (dest == src)
// // 		return (dest);
// // 	while(i >= 0)
// // 	{
// // 		((char *)dest)[i] = ((char *)src)[i];
// // 		if (i == 0)
// // 			break;
// // 		i--;
// // 	}
// // 	((char *)dest)[i] = 0;
// // 	return (dest);
// // }

// // char	*get_next_line(int fd)
// // {
// // 	static char	b[BUFFER_SIZE +1] = "";
// // 	char		*ret = NULL;
// // 	ssize_t		read_ret;
// // 	char		*n;

// // 	if (fd < 0 || BUFFER_SIZE <= 0)
// // 		return (NULL);
// // 	n = ft_strchr(b, '\n');
// // 	while (!n)
// // 	{
// // 		if (b[0] != '\0')
// // 		{
// // 			if (!str_append_mem(&ret, b, ft_strlen(b)))
// // 			{
// // 				if (ret)
// // 					free(ret);
// // 				b[0] = 0;
// // 				return (NULL);
// // 			}
// // 		}
// // 		read_ret = read(fd, b, BUFFER_SIZE);
// // 		if (read_ret < 0)
// // 		{
// // 			if (ret)
// // 				free(ret);
// // 			b[0] = 0;
// // 			return (NULL);
// // 		}
// // 		if (read_ret == 0)
// // 			break;
// // 		b[read_ret] = 0;
// // 		n = ft_strchr(b, '\n');
// // 	}
// // 	if (n)
// // 	{
		
// // 		if (!str_append_mem(&ret, b, n - b + 1))
// // 		{
// // 			if (ret)
// // 				free(ret);
// // 			b[0] = 0;
// // 			return (NULL);
// // 		}
// // 		ft_memmove(b, n + 1, ft_strlen(n+1));
// // 		return (ret);
// // 	}
// // 	if (read_ret == 0)
// // 	{
// // 		if (!str_append_mem(&ret, b, ft_strlen(b)))
// // 		{
// // 			if (ret)
// // 				free(NULL);
// // 			b[0] = 0;
// // 			return (NULL);
// // 		}
// // 		b[0] = 0;
// // 		if (*ret)
// // 			return (ret);
// // 	}
// // 	free(ret);
// // 	return NULL;
// // }

// // char	*ft_strchr(char *s, int c)
// // {
// // 	int i;

// // 	i = 0;
// // 	if (!s)
// // 		return (NULL);
// // 	while (s[i])
// // 	{
// // 		if (s[i] == (char)c)
// // 			return (s + i);
// // 		i++;
// // 	}
// // 	if (c == 0)
// // 		return (s + i);
// // 	return (NULL);
// // }

// // size_t	ft_strlen(char *s)
// // {
// // 	size_t ret;

// // 	ret = 0;
// // 	if (!s)
// // 		return (0);
// // 	while (s[ret])
// // 		ret++;
// // 	return (ret);
// // }

// // void	*ft_memcpy(void *dest, const void *src, size_t n)
// // {
// // 	size_t	i;

// // 	i = 0;
// // 	if (!dest || !src)
// // 		return (NULL);
// // 	while (i < n)
// // 	{
// // 		((char *)dest)[i] = ((char *)src)[i];
// // 		i++;
// // 	}
// // 	return (dest);
// // }

// // int	str_append_mem(char **s1, char *s2, size_t size2)
// // {
// // 	size_t	size1 = ft_strlen(*s1);
// // 	char	*tmp = malloc(size2 + size1 + 1);
// // 	if (!tmp)
// // 		return (0);
// // 	if (*s1)
// // 		ft_memcpy(tmp, *s1, size1);
// // 	ft_memcpy(tmp + size1, s2, size2);
// // 	tmp[size1 + size2] = 0;
// // 	free(*s1);
// // 	*s1 = tmp;
// // 	return (1);
// // }

// // int	str_append_str(char **s1, char *s2)
// // {
// // 	return (str_append_mem(s1, s2, ft_strlen(s2)));
// // }

// // void	*ft_memmove(void *dest, const void *src, size_t n)
// // {
// // 	size_t	i;

// // 	if (!dest || !src)
// // 		return (NULL);
// // 	if (src > dest)
// // 		return (ft_memcpy(dest, src, n));
// // 	if (src == dest || n == 0)
// // 		return (dest);
// // 	i = n - 1;
// // 	while (1)
// // 	{
// // 		((char *)dest)[i] = ((char *)src)[i];
// // 		if (i == 0)
// // 			break;
// // 		i--;
// // 	}
// // 	return (dest);
// // }

// // char	*get_next_line(int fd)
// // {
// // 	static char	b[BUFFER_SIZE + 1] = "";
// // 	char		*ret = NULL;
// // 	char		*n;
// // 	ssize_t		read_ret;

// // 	read_ret = 1;
// // 	if (fd < 0 || BUFFER_SIZE <= 0)
// // 		return (NULL);
// // 	n = ft_strchr(b, '\n');
// // 	while (!n)
// // 	{
// // 		if (b && *b)
// // 		{
// // 			if (!str_append_mem(&ret, b, ft_strlen(b)))
// // 			{
// // 				if (ret)
// // 					free(ret);
// // 				b[0] = 0;
// // 				return (NULL);
// // 			}

// // 		}
// // 		read_ret = read(fd, b, BUFFER_SIZE);
// // 		if (read_ret < 0)
// // 		{
// // 			if (ret)
// // 				free(ret);
// // 			b[0] = 0;
// // 			return (NULL); 
// // 		}
// // 		b[read_ret] = 0;
// // 		if (read_ret == 0)
// // 			break ;
// // 		n = ft_strchr(b, '\n');
// // 	}
// // 	if (read_ret == 0)
// // 	{
// // 		b[0] = 0;
// // 		if (ret && *ret)
// // 			return(ret);
// // 		return (NULL);
// // 	}
// // 	if (n)
// // 	{
// // 		if (!str_append_mem(&ret, b, (n - b) + 1))
// // 		{
// // 			if (ret)
// // 				free(ret);
// // 			b[0] = 0;
// // 			return (NULL);
// // 		}
// // 		ft_memmove(b, (n + 1), ft_strlen(n +1));
// // 		b[ft_strlen(n +1)] = 0;
// // 		return (ret);
// // 	}
// // 	return (NULL);
// // }


// char	*ft_strchr(char *s, int c)
// {
// 	int i = 0;
// 	if (!s)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (s[i] == (unsigned char)c)
// 			return (s + i);
// 		i++;
// 	}
// 	if ((unsigned char)c == '\0')
// 		return(s + i);
// 	return (NULL);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t i;

// 	 i = 0;
// 	if (!dest || !src)
// 		return (NULL);
// 	while (i < n)
// 	{
// 		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
// 		i++; 
// 	}
// 	return (dest);
// }

// size_t	ft_strlen(char *s)
// {
// 	size_t i;

// 	i = 0;
// 	if (!s)
// 		return i;
// 	while (s[i])
// 		i++;
// 	return (i);
// }
// int	str_append_mem(char **s1, char *s2, size_t size2)
// {
// 	size_t	size1 = ft_strlen(*s1);
// 	char	*tmp = malloc(size2 + size1 + 1);
// 	if (!tmp)
// 		return (0);
// 	if (s1)
// 		ft_memcpy(tmp, *s1, size1);
// 	ft_memcpy(tmp + size1, s2, size2);
// 	tmp [size1 + size2] = 0;
// 	free(*s1);
// 	*s1 = tmp;
// 	return (1);
// }

// int	str_append_str(char **s1, char *s2)
// {
// 	return (str_append_mem(s1, s2, ft_strlen(s2)));
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t i;

// 	if (!dest || !src || n == 0)
// 		return (NULL);
// 	if (src > dest)
// 		return(ft_memcpy(dest, src, n));
// 	if (dest == src)
// 		return (dest);
// 	i = n-1;
// 	while (1)
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 			if(i == 0)
// 				break;
// 		i--;
// 	}
// 	return (dest);
// }

// char	*get_next_line(int fd)
// {
// 	static char b[BUFFER_SIZE + 1] = "";
// 	char *ret = NULL;
// 	char *n;
// 	ssize_t read_ret;

// 	if (fd < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);
// 	n = ft_strchr(b, '\n');
// 	while (!n)
// 	{
// 		if (*b)
// 		{
// 			if (!str_append_mem(&ret, b, ft_strlen(b)))
// 			{
// 				if (ret)
// 					free(ret);
// 				b[0] = 0;
// 				return NULL;
// 			}
// 		}
// 		read_ret = read(fd, b, BUFFER_SIZE);
// 		if (read_ret< 0)
// 		{
// 			if (ret)
// 					free(ret);
// 			b[0] = 0;
// 			return NULL;
// 		}
// 		b[read_ret] = 0;
// 		if (read_ret == 0)
// 			break;
// 		n = ft_strchr(b, '\n');
// 	}
// 	if (n)
// 	{
// 		if (!str_append_mem(&ret, b, n-b+1))
// 		{
// 			if (ret)
// 				free(ret);
// 			b[0] = 0;
// 			return NULL;
// 		}
// 		ft_memmove(b, n+1, ft_strlen(n+1));
// 		b[ft_strlen(n+1)] = 0;
// 		return (ret);
// 	}
// 	if (read_ret == 0)
// 	{
// 		if (*b)
// 		{
// 			if (!str_append_mem(&ret, b, ft_strlen(b)))
// 			{
// 				if (ret)
// 					free(ret);
// 				b[0] = 0;
// 				return NULL;
// 			}
// 			b[0] = 0;
// 			return (ret);
// 		}
// 		if (ret)
// 			free(ret);
// 		b[0] = 0;
// 		return (NULL);
// 	}
// 	return (NULL);
// }


char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (s+i);
		i++;
	}
	if ((char)c == '\0')
		return (s+i);
	return (NULL);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

int	str_append_mem(char **s1, char *s2, size_t size2)
{
	size_t	size1 = ft_strlen(*s1);
	char	*tmp = malloc(size2 + size1 + 1);
	if (!tmp)
		return (0);
	if (*s1)
		ft_memcpy(tmp, *s1, size1);
	ft_memcpy(tmp + size1, s2, size2);
	tmp [size1 + size2] = 0;
	free(*s1);
	*s1 = tmp;
	return (1);
}

int	str_append_str(char **s1, char *s2)
{
	return (str_append_mem(s1, s2, ft_strlen(s2)));
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = n-1;
	if (!dest || !src)
		return (NULL);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	else if (src == dest)
		return (dest);
	else
	{
		while (1)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			if (i == 0)
				break;
			i--;
		}
	}
	return (dest);
}

char	*get_next_line(int fd)
{
	static	char b[BUFFER_SIZE + 1] = "";
	char		*ret = NULL;
	char		*n;
	ssize_t		read_ret;

	read_ret = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	n = ft_strchr(b, '\n');
	while (!n)
	{
		if (*b)
		{
			if (!str_append_mem(&ret, b, ft_strlen(b)))
			{
				if (ret)
					free(ret);
				b[0] = 0;
				return (NULL);
			}
		}
		read_ret = read(fd, b, BUFFER_SIZE);
		if (read_ret < 0)
		{
			if (ret)
				free(ret);
			b[0] = 0;
			return (NULL);
		}
		b[read_ret] = 0;
		if (read_ret == 0)
			break ;
		n = ft_strchr(b, '\n');
	}
	if (read_ret == 0)
	{
		if (ret)
		{
			if (!str_append_mem(&ret, b, ft_strlen(b)))
			{
				if (ret)
					free(ret);
				b[0] = 0;
				return (NULL);
			}
			b[0] = 0;
			return (ret);
		}
		else
			return (NULL);
	}
	else if (n)
	{
		if (!str_append_mem(&ret, b, (n - b +1)))
		{
				if (ret)
					free(ret);
				b[0] = 0;
				return (NULL);
		}
		ft_memmove(b, n + 1, ft_strlen(n+1));
		b[ft_strlen(n+1)] = 0;
		return(ret);
	}
	return (NULL);
}


int main()
{
	char *line;
	int fd = open("../filter/test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("fd error\n");
		return (1);
	}
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break;
		free(line);
	}
	free(line);
	return 0;
}