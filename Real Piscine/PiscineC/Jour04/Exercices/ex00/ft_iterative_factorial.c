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

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb >= 0 && nb < 13)
	{
		while (i <= nb)
		{
			result = result * i++; 
		}
	}
	else
		return(0);
	return(result);
}

int	main()
{
	ft_putnbr(ft_iterative_factorial(12));
	ft_putchar('\n');
	return(0);
}
