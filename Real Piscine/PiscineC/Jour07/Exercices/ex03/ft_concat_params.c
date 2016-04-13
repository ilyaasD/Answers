#include <unistd.h>
#include <stdlib.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	len;
	char	*str;

	i = 1;
	j = 1;
	k = 0;
	l = 0;
	len = 0;
	while (i < argc)
	{
		len = len + ft_strlen(argv[j]) + 1;
		i++;
		j++;
	}
	str = malloc(sizeof(char) * len);
	i = 1;
	j = 1;
	while (i < argc)
	{
		while (argv[j][k] != '\0')
		{
			str[l] = argv[j][k];
			k++;
			l++;
		}
		str[l] = '\n';
		i++;
		j++;
		k = 0;
		l++;
	}
	return(str);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 1)
		return(0);
	else
		str = ft_concat_params(argc, argv);
	ft_putstr(str);
	return(0);
}
