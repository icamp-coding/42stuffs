/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:33 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/27 21:39:43 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	box;

	box = a / b;
	*div = box;
	box = a % b;
	*mod = box;
}
// OBJ : Divides "a" & "b" and store result in integer to "*div", 
// and store remainder of division of "a" & "b" in integer to "*mod"
// 1. Create "box" for storing and transfering result.
// 2. Divide "a" and "b" and transfer the result to "box".
// 3. Then transfer divided result from the "box" to "*div".
// 4. Now the "box" is empty, store the remainder of "a" & "b" to "box".
// 5. Lastly, transfer result from "box" to "*mod".