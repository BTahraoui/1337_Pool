#include <unistd.h>
#include <stdio.h>

int count_alen(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        if (str[i] != 'a')  // if count didnt meat a the count will be increased every cycle.
            count++;
        i++;
    }
    return (count);
}
int main(void)
{
    char str[] = "hellao";
    int x = count_alen(str);
    printf("%d", x);
    return 0;
}