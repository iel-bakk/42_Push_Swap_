/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:39:25 by iel-bakk          #+#    #+#             */
/*   Updated: 2022/10/27 22:13:02 by iel-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_num(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	check(int ac, char **av)
{
	int		count;
	char	*str;
	int		i;

	count = 0;
	i = 0;
	while (++i < ac)
	{
		str = av[i];
		check_arg(str, &count);
	}
	if (!count)
		mi_exit();
	return (count);
}

void	check_arg(char *str, int *count)
{
	while (*str)
	{
		if (ft_is_sign(*str) && ft_is_num(*(str + 1)))
			str++;
		if (ft_is_num(*str))
		{
			*count += 1;
			while (ft_is_num(*str))
				str++;
		}
		else if (ft_is_space(*str))
			while (ft_is_space(*str))
				str++;
		else
			mi_exit();
	}
}
