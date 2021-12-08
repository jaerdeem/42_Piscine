/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:18:56 by aalkan            #+#    #+#             */
/*   Updated: 2021/12/08 17:20:00 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
		index++;
	return (s1[index] - s2[index]);
}
