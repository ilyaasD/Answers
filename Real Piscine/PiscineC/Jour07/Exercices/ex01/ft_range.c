#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	*ft_range(int min, int max)
{
	int	*table;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len < 1)
		return(0);
	else
	{
		table = malloc(sizeof(int) * len + 1);
		while (i < len)
		{
			table[i] = min;
			i++;
			min++;
		}
		table[i] = '\0';
	}
	return(table);
}

int	main()
{
	int	*table;
	int	i;

	i = 0;
	table = ft_range(1, 15);
	while (table[i] != '\0')
	{
		ft_putnbr(table[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return(0);
}
