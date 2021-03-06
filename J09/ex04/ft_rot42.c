/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:36:44 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/17 16:36:47 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] += 16;
		else if (str[i] > 'J' && str[i] <= 'Z')
			str[i] -= 10;
		else if (str[i] >= 'a' && str[i] <= 'j')
			str[i] += 16;
		else if (str[i] > 'j' && str[i] <= 'z')
			str[i] -= 10;
		i++;
	}
	return (str);
}
