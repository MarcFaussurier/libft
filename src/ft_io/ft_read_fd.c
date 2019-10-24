#include "./../../inc/ft.h"

char    *ft_read_fd(char delimiter, int fd)
{
	unsigned int	input_len;
	char			*input_buffer;

	input_len = 0;
	input_buffer = malloc(sizeof(char));
	while (1)
	{
		if (!read(fd, input_buffer + input_len, 1))
			break ;
		if ((int)*(input_buffer + input_len) == (int)delimiter)
			break ;
		input_len += 1;
		input_buffer = realloc(input_buffer, (input_len + 1) * sizeof(char));
	}
	input_buffer = realloc(input_buffer, (input_len + 1) * sizeof(char));
	*(input_buffer + input_len) = '\0';
	return (input_buffer);
}
