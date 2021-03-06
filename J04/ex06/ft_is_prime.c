/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 11:45:58 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/15 21:39:35 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	else if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0 && i != nb)
				return (0);
			else if (i == 2)
				i++;
			else
				i += 2;
		}
	}
	return (1);
}
