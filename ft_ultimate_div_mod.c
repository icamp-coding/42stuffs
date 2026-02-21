/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:41:51 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/27 22:06:15 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	boxa;
	int	boxb;

	boxa = *a / *b;
	boxb = *a % *b;
	*a = boxa;
	*b = boxb;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 5;
// 	num2 = 3;
// 	ft_ultimate_div_mod(&num1, &num2);
// 	printf("%d, %d\n", num1, num2);
// }

//---------------------------------------------
//OBJ: Divides "a" & "b" and transfer the result in "*a", remainder
//of "a" & "b" to "*b".
//1. Create "boxa" to store and transfer result to "*a".
//2. Create "boxb" to store and transfer result to "*b".
//3. Divide "a" & "b" and transfer the result to "boxa".
//4. Transfer the remainder of "a" & "b" to "boxb".
//5. Transfer divided result from "boxa" to "*a".
//6. Transfer remainder from "boxb" to "*b".
