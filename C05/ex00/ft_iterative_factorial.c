/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebayat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:59:11 by mebayat           #+#    #+#             */
/*   Updated: 2022/09/07 13:15:55 by mebayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 12 || nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
