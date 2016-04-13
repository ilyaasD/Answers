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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_eighth_ft(int ********nbr)
{
	********nbr = 8;
	ft_putnbr(********nbr);
	ft_putchar('\n');
	ft_ultimate_ft(&nbr);
}

void	ft_seventh_ft(int *******nbr)
{
	*******nbr = 7;
	ft_putnbr(*******nbr);
	ft_putchar('\n');
	ft_eighth_ft(&nbr);
}

void	ft_sixth_ft(int ******nbr)
{
	******nbr = 6;
	ft_putnbr(******nbr);
	ft_putchar('\n');
	ft_seventh_ft(&nbr);
}

void	ft_fifth_ft(int *****nbr)
{
	*****nbr = 5;
	ft_putnbr(*****nbr);
	ft_putchar('\n');
	ft_sixth_ft(&nbr);
}

void	ft_fourth_ft(int ****nbr)
{
	****nbr = 4;
	ft_putnbr(****nbr);
	ft_putchar('\n');
	ft_fifth_ft(&nbr);
}

void	ft_third_ft(int ***nbr)
{
	***nbr = 3;
	ft_putnbr(***nbr);
	ft_putchar('\n');
	ft_fourth_ft(&nbr);
}

void	ft_second_ft(int **nbr)
{
	**nbr = 2;
	ft_putnbr(**nbr);
	ft_putchar('\n');
	ft_third_ft(&nbr);
}

void	ft_first_ft(int *nbr)
{
	*nbr = 1;
	ft_putnbr(*nbr);
	ft_putchar('\n');
	ft_second_ft(&nbr);
}

int	main()
{
	int	n;

	n = 24;
	ft_putnbr(n);
	ft_putchar('\n');
	ft_first_ft(&n);
	ft_putnbr(n);
	ft_putchar('\n');
	return(0);
}
