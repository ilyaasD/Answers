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

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
			return(0);
		i++;
	}
	return(1);
}

int	main()
{
	char	str[] = "dsfliksfdhbsIBDIF!SBFSDF";
	ft_putnbr(ft_str_is_alpha(str));
	ft_putchar('\n');
	return(0);
}
