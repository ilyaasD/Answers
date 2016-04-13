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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}

int	main()
{
	char str[] = "JE SUIS EN MINUSCULE.";
	ft_putstr(ft_strlowcase(str));
	ft_putchar('\n');
	return(0);
}
