int	max(int *tab, unsigned int len)
{
	int max;
	int i;
	int res;

	if (len == 0 || !tab)
		return (0);

	res = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}
