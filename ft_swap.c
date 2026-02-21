/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:03:12 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/27 19:23:20 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	em;

	em = *a;
	*a = *b;
	*b = em;
}
// OBJ: Swap values of two integers(a, b)
//1. em = empty space to store "a" value
//2. Send "a" value >>> "em"
//3. Now "a" is empty, send "b" value >>> empty "a"
//4. Now "b" value was send to "a", that make "b" is empty.
//5. Now both "a" and "b" swaped ("em" has value of *a)
// and("*a" has value of *b)
