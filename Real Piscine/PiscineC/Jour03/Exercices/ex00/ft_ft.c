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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	n;

	n = 24;
	ft_putnbr(n);
	ft_putchar('\n');
	ft_ft(&n);
	ft_putnbr(n);
	ft_putchar('\n');
	return(0);
}
