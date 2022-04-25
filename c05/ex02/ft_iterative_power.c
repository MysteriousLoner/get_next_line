/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalee <yalee@student.42.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:32:16 by yalee             #+#    #+#             */
/*   Updated: 2022/04/24 13:33:19 by yalee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
