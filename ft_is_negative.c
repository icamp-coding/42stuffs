/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:44:18 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/22 08:37:26 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_is_negative(int n);

// int	main(void)
// {
// 	ft_is_negative();
// }

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
	}
	else
	{
		letter = 'P';
	}
	write(1, &letter, 1);
}
