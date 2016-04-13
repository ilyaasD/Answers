#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}

int	main()
{
	char str[] = "je suis en majuscule.";
	ft_putstr(ft_strupcase(str));
	ft_putchar('\n');
	return(0);
}
