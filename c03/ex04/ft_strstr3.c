char *ft_strstr(char *str, char *to_find)
{
    int i;
    int y;
    int size_to_find;
    char *ptr[100];

    i = 0;
    y = 0;
    size_to_find = 0;
    while(to_find[size_to_find])
        size_to_find++;
    while (str[i])
    {
        while (str[i] && str[i++] == to_find[y++])
        {
            if (str[i] != '\0')
            {
                ptr[y] = &str[i];
                i++;
                y++;
            }
        }
        y = 0;
        /*if ()
            return (NULL);
        else
            //i++;*/
    //}
    return (*ptr);
}

// si trouve une lettre au commun print le reste. alor que ca ne devrait
//etre que qd le mot en entier est trouve