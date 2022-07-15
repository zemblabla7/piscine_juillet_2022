nsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (src[i]);
}