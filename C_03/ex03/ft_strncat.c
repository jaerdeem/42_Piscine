/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:24:05 by aalkan            #+#    #+#             */
/*   Updated: 2021/12/08 17:24:08 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	sr;
	unsigned int	de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	sr = 0;
	while (sr < nb && src[sr] != '\0')
	{
		dest[de + sr] = src[sr];
		sr++;
	}
	dest[de + sr] = '\0';
	return (dest);
}
