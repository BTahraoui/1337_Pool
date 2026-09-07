#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int end = strlen(argv[1]) - 1;
    int start = 0;
    char temp;

    if (argc != 2)
        return 0;
    
    while (start < end )
    {
        temp = argv[1][start];
        argv[1][start] = argv[1][end];
        argv[1][end] = temp;
        start++;
        end--;
    }

    start = 0;
    while (argv[1][start])
    {
        write(1, &argv[1][start], 1);
        start++;
    }
    write(1, "\n", 1);
    return 0;
}
