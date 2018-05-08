/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 18:19:37 by ikotvits          #+#    #+#             */
/*   Updated: 2018/03/19 18:19:38 by ikotvits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
