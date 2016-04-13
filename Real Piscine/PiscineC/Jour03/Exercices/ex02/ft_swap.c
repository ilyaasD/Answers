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

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putchar('\n');
	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_putchar('\n');
	return(0);
}
