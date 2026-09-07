#include <stdlib.h>

int 	*range(int min, int max)
{
	int i;
	int size;
	int *tab;

	size = max - min;
	if (size < 0)
		size = -size;
	size += 1;

	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return NULL;
	i = 0;
	while ( i < size)
	{
		if (min > max )
			tab[i] = min - i;
		else
			tab[i] = min + i;
		i++; 
	}
	return (tab);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	int *tab;
	tab = range(5, 16);
	for (int i = 0; i < 11; i++)
	{
		printf("%d, ", tab[i]);
	}
	return 0;
}
