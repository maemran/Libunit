/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:13:19 by salshaha          #+#    #+#             */
/*   Updated: 2025/07/18 18:18:05 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*int main(void)
{
char	str[] = "this is string.h library function";
ft_bzero(str, 3);
for (unsigned long int i = 0; i < sizeof(str); i++)
	{
			printf("%c", str[i]);
	}
return (0);
}*/
