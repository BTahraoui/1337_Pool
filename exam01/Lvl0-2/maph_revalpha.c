#include <unistd.h>

int main(void)
{
    char x;
    char temp;

    x  = 'z';
    while (x >= 'a')
    {
        if (x % 2 == 1)
        {
            temp = x - 32;
            write(1, &temp, 1);
        }
        else
            write(1, &x, 1);
        x--;
    }
}