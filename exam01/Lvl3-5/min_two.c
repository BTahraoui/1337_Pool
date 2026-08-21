void    min_two(int *a, int *b)
{
    int temp;

    if (*a < *b)
        *a = *a;
    else if (*a > *b)
        temp = *a;
        *a = *b;
}