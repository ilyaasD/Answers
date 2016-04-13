#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter--);
	}
}
int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return(0);
}
