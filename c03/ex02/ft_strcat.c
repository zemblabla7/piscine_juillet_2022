char *ft_strcat(char *dest, char *src)
{
    int l_dest;
    int l_src;
    int i;

    l_dest = 0;
    l_src = 0;
    i = 0;
    while(dest[l_dest])
        l_dest++;
    while (src[l_src])
        l_src++;
    while (i < l_src) // ou tant que src[i] != '\0'
    {
        dest[l_dest] = src[i];
        l_dest++;
        i++;
    }
    dest[l_dest] = '\0';
    return (dest);
}