#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main()
{
	ft_putnbr(ft_fibonacci(9));
	ft_putchar('\n');
	return(0);
}
