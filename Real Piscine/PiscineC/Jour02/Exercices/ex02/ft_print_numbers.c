#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char	letter;

	letter = '0';
	while (letter <= '9')
	{
		ft_putchar(letter++);
	}
	ft_putchar('\n');
}
int	main()
{
	ft_print_alphabet();
	return(0);
}
