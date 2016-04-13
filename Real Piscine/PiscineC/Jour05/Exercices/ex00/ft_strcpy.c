#include <unistd.h>
#include <string.h>

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
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char	str[] = "abc";
	char	rts[] = "abc";

	ft_putstr("Fonctions :\t\t\t\t\tft_strcpy\tstrcpy\n\n");

	ft_putstr("NOMBRE DE CARACTERES EGAUX\n");
	ft_putstr("Contenu de la variable avant la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_strcpy(str, "123");
	strcpy(rts, "123");
	ft_putstr("Contenu de la variable après la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_putstr("Longueur de la variable après la fonction :\t");
	ft_putnbr(ft_strlen(str));
	ft_putstr("\t\t");
	ft_putnbr(ft_strlen(rts));
	ft_putstr("\n\n");

	ft_putstr("NOMBRE DE CARACTERES INFERIEURS\n");
	ft_putstr("Contenu de la variable avant la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_strcpy(str, "a");
	strcpy(rts, "a");
	ft_putstr("Contenu de la variable après la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_putstr("Longueur de la variable après la fonction :\t");
	ft_putnbr(ft_strlen(str));
	ft_putstr("\t\t");
	ft_putnbr(ft_strlen(rts));
	ft_putstr("\n\n");

	ft_putstr("NOMBRE DE CARACTERES SUPERIEURS\n");
	ft_putstr("Contenu de la variable avant la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_strcpy(str, "1234");
	strcpy(rts, "1234");
	ft_putstr("Contenu de la variable après la fonction :\t");
	ft_putstr(str);
	ft_putstr("\t\t");
	ft_putstr(rts);
	ft_putchar('\n');
	ft_putstr("Longueur de la variable après la fonction :\t");
	ft_putnbr(ft_strlen(str));
	ft_putstr("\t\t");
	ft_putnbr(ft_strlen(rts));
	ft_putstr("\n\n");
	return(0);
}
