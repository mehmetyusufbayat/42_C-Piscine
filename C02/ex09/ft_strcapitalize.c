/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebayat <mebayat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:19:25 by mebayat           #+#    #+#             */
/*   Updated: 2022/09/01 17:54:23 by mebayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 0 && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
			k++;
		}
		else if (k > 0 && ('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			k++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			k++;
		else if (str[i] >= '0' && str[i] <= '9')
			k++;
		else
			k = 0;
		i++;
	}
	return (str);
}
