#include <unistd.h>
int main(void)
{
char c = 'z';
 	while (c >= 'a')
	{
		if((c - 'a') % 2 == 1)
		{
			write(1, &c, 1);
		}
		else
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		c--;
	}
	write(1, "\n", 1);
	return (0);
}		
