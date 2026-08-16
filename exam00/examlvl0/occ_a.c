#include <stdio.h>
int occ_a(char *str)
{
    int i = 0;
    int a = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            a = a + 1;
        i++;
    }
    return (a);
}
int main()
{
    char x[] = "AAAbbAA";
    int y = occ_a(x);
    printf("%d", y);
    return (0);
}