/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puvittan <puvittan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:42:24 by puvittan          #+#    #+#             */
/*   Updated: 2025/05/27 23:34:41 by puvittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strlen("Hello"));
// }
// --------------------------------------------
// OBJ: Count and returns the numbers of character in a string.
//1. Input character in "ft_strlen()" e.g. "Hello"
//2. Create variable ("i") set as "0" refer as first position of array("str").
//3. Create variable ("count") set as "0" for display numbers of character.
//4. While "str[i]" (input character position "i" e.g. if "i"= 0
// means the first character in "Hello" which is "H")
// and "str[i]" is not equal '\0' (Null, the "invisible" character always
// appear after last character, in this, is after "o" in "Hello").
// 5. If conditions were met, "i" will +1 and so the next position of character
// will be checked with the same condition. And on and on. Also "count" will +1
// display the input number of character. And on and on....till last position.
// 6.Until it reach '\0' (after "o" in "Hello"). The while condition will
// will be false. The process will be stop. Ending display numbers.