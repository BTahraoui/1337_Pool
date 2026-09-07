#include <unistd.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int end = strlen(argv[1]) - 1;
    if (argc != 2)
        return 0;
    int i = 0;
    while (i < end)
    {
        if (argv[1][i] != argv[1][end]){
            write(1, "N", 1);
            return 0;
        }
        i++;
        end--;
    }
    write(1, "P", 1);
    return 0;
}
