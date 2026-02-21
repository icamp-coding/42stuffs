/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:07:45 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/28 11:55:52 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)

// {
// 	ft_putstr("Hello guys");
// }

//-------------------------------------------------------
//OBJ : Display a string of character on the standard output.
//1. Input character e.g. "Hello guys"
//2. Create variable ("i") set as "0" refer as first position of array("str").
//3. While "str[i]" (input character position "i" e.g. if "i"= 0
// means the first character in "Hello guys" which is "H")
// and "str[i]" is not equal '\0' (Null, the "invisible" character always
// appear after last character, in this is after "s" in "Hello guys")
// then display THAT character (which first one is "H" from "Hello guys")
// 4. If condition were met, "i" will +1 so the next position of character will
// be checked with the same condition. And on and on....
// 5. Until it reach '\0' (after "s" in "...guys"). The while condition will
// will be false. The process will be stop.