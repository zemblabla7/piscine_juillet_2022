char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int l_dest;
    int l_src;
    int i;

    l_dest = 0;
    l_src = 0;
    i = 0;
    while(dest[l_dest])
        l_dest++;
    while (i < nb)
    {
        dest[l_dest] = src[i];
        l_dest++;
        i++;
    }
    dest[l_dest] = '\0';
    return (dest);
}