#include <stdio.h>

int occ_a(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (str[i] == 'z')
            count++;
        i++;
    }
    return (count);
}
int main(void)
{
    char str[] = "AAAddAAzgcca";
    int x = occ_a(str);
    printf("%d", x);
    return (0);
}