/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:04:58 by msoulaim          #+#    #+#             */
/*   Updated: 2019/04/09 15:05:43 by msoulaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int c;

	i = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	c = nb;
	while (i < nb)
	{
		c = c * i;
		i++;
	}
	return (c);
}
