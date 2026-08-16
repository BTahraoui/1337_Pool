#include <stdio.h>

int palindrom(char *str)
{
    int i = 0;
    int j = 0;
    int end = 0;
    while (str[j])
        j++;
    end = j - 1;
    while (i < end)
    {
        if (str[i] != str[end])
            return (0);
        i++;
        end--;
    }
    return (1);
}
int main()
{
    char str[] = "121";
    int x = palindrom(str);
    printf("%d", x);
    return (0);
}