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

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 0)
	{
		while (power != 0)
		{
			result = result * nb;
			power--;
		}
	}
	else
		return(0);
	return(result);
}

int	main()
{
	ft_putnbr(ft_iterative_power(5, 5));
	ft_putchar('\n');
	return(0);
}
