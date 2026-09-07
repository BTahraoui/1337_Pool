#include <unistd.h>
int main()
{
	char x ;
	char i ;
	i = 'a' ;
	x = 'B' ;
	while (i <= 'z' && x <= 'z')
	{
		write (1, &i, 1);
		write (1, &x, 1);
		i = i + 2 ;
		x = x + 2 ;
	}
	write (1, "\n", 1);
	return 0 ;
}
