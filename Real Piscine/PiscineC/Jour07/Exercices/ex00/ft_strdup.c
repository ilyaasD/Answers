#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar (char c)
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

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
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

char	*ft_strdup(char *src)
{
	int	len;
	char	*new;

	len = ft_strlen(src);
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return(NULL);
	else
		return(ft_strcpy(new, src));
}

int	main()
{
	char	src[] = "Je suis une pomme.";
	char	*dest;
	char	crs[] = "Je suis une poire.";
	char	*tsed;

	ft_putstr("strdup :\n");
	ft_putstr(src);
	ft_putchar('\n');
	dest = strdup(src);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr("ft_strdup :\n");
	ft_putstr(crs);
	ft_putchar('\n');
	tsed = strdup(crs);
	ft_putstr(tsed);
	ft_putchar('\n');
	return(0);
}
