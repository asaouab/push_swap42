/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:52:57 by asaouab           #+#    #+#             */
/*   Updated: 2023/07/23 22:30:30 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	c = strlen(sep);
	j = 0;
	while (strs[j])
	{
		i = i + strlen(strs[j]);
		i = i + c;
		j++;
	}
	s = malloc(i + 1);
	if (!s)
		printf("s matallocach\n");
	i = 0;
	c = 0;
	printf("hello\n");
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c] = sep[j];
			c++;
			j++;
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
 