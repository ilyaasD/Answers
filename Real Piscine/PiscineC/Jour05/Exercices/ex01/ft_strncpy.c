#include <unistd.h>
#include <string.h>

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

int	ft_putnbr(int n)
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

int	main()
{
	char	str[] = "nolibit";
	char	rts[] = "nolibit";

	ft_putstr("Fonctions :\t\t\t\t\tft_strncpy\tstrncpy\n\n");

	ft_putstr("SI N == LEN(DEST) && N == LEN(SRC) - SRC = lolipop\n");
	ft_putstr("Contenu de la variable avant la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_strncpy(str, "lolipop", ft_strlen(str));
	strncpy(rts, "lolipop", ft_strlen(rts));
	ft_putstr("Contenu de la variable après la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putstr("\n\n");

	ft_putstr("SI N < LEN(DEST) && N == LEN(SRC) - SRC = oulipo\n");
	ft_putstr("Contenu de la variable avant la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_strncpy(str, "oulipo", ft_strlen(str) - 1);
	strncpy(rts, "oulipo", ft_strlen(rts) - 1);
	ft_putstr("Contenu de la variable après la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putstr("\n\n");
	return(0);
}
