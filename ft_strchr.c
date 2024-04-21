/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:59:35 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/20 20:54:45 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(char *str, int c)
{
	char	s;
	int		i;

	i = 0;
	s = (char )c;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return (str + i);
		i++;
	}
	if (s == '\0')
		return (str + i);
	return (NULL);
}
