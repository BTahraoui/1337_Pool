#include <unistd.h>

int main(void)
{
    int x;
    char c;

    x = 0;
    while (x <= 10)
    {
        if (x < 10)
        {
            c = x + '0';
            write(1, &c, 1);
        }
        else    
            write(1, "10", 2);
        x+=2;
    }
    return 0;
}