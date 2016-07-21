#include "ft_utils.h"

int				ft_any(char **tab, int(*f)(char *))
{
	int			i;
	int			ret;

	i = ret = 0;
	while (tab[i + 1] && !ret && (ret = (f(tab[i]) == 1) ? (1) : (ret)))
		i++;
	return (ret);
}