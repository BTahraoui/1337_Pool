#include <stdlib.h>

char	**ft_split(char *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(1000);
	if (!tab || !str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			k = 0;
			while (str[i + k] && str[i + k] != c)
				k++;
			tab[j] = (char *)malloc(k + 1);
			if (!tab[j])
				return (NULL);
			for (int len = 0; len < k; len++)
				tab[j][len] = str[i + len];
			tab[j][k] = '\0';
			j++;
			i += k;
		}
	}
	tab[j] = NULL;
	return (tab);
}