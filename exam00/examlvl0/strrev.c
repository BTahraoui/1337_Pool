char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    while (str[j])
        j++;
    int end = j - 1;
    while (i < end)
    {
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        end--;
        i++;
    }
    return (str);
}