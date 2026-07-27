
int 	ft_atoi(const char *str)
{
	int res;
	int i;
	int sign;
	
	i = 0;

	while (!(str[i] >= 32 && str[i] <= 126))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res  * sign);
}
