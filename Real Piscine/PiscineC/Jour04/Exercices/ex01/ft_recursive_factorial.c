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

int	ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
		return(nb * ft_recursive_factorial(nb - 1));
	else
		return(1);
}

int	main()
{
	ft_putnbr(ft_recursive_factorial(0));
	ft_putchar('\n');
	return(0);
}
