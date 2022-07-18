int     ft_atoi(char *str)
{
    int     i;
    int     nb;
    int     negative;

    i = 0;
    nb = 0;
    negative = 0;
    while (str[i])
    {
        if (str[i] =='-')
                negative++;
        if (str[i] >= '0' && str[i] <= '9')
            nb = nb * 10 + str[i] - '0';
        if (str[i] != ' ' || str[i] != '+' || str[i] != '-' || (str[i] <= '0' && str[i] >= '9'))
            break;
        i++;
    }
    if (negative % 2 != 0)
        nb = nb * -1;
    return (nb);
}