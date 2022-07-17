unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int		y;
	int		dest_original_size;

	i = 0;
	y = 0;
	dest_original_size = 0;
	while (dest[dest_original_size])
		dest_original_size++;
	y = dest_original_size;
	while ((y + i) < size)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[size] = '\0';
	y++;
	return (y);
}