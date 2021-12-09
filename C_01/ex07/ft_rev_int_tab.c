/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:20:32 by aalkan            #+#    #+#             */
/*   Updated: 2021/12/04 20:56:12 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	gecici;

	i = 0;
	while (i < size / 2)
	{
		gecici = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = gecici;
		i++;
	}
}
