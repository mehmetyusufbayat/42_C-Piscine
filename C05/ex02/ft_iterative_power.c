/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebayat <mebayat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:38:37 by mebayat           #+#    #+#             */
/*   Updated: 2022/09/07 13:19:25 by mebayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	p = nb;
	while (power > 1)
	{
		p = p * nb;
		power--;
	}
	return (p);
}
