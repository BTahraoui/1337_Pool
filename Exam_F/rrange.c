#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = 0;
    int i;
    int *tab;

    size = end - start;
    if (size < 0)
        size = -size;
    size += 1;
    tab = malloc((size) * sizeof(int));
    if (tab == NULL)
        return (NULL);
    i = 0;
    while (i < size)
    {
        if (end < start)
            tab[i] = start - i;
        else
            tab[i] = start + i;
        i++;
    } 
    return (tab);
}
#include <stdio.h>

int main(void)
{
    int *tab;
    tab = ft_rrange(-5, 10);
    for(int i = 0; i < 16; i++ )
    {
        printf("%d, ", tab[i]);
    }
    free(tab);
    tab =NULL;
    return 0;
}