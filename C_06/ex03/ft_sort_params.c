/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:35:02 by aalkan            #+#    #+#             */
/*   Updated: 2021/12/13 12:35:04 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			str1 ++;
			str2 ++;
		}
		else
			break ;
	}
	return (*str1 - *str2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	min_ind;

	i = 1;
	while (i < argc - 1)
	{
		min_ind = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min_ind], argv[j]) > 0)
				min_ind = j;
			j ++;
		}
		ft_swap(&argv[min_ind], &argv[i]);
		i ++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i ++;
	}
	return (0);
}
