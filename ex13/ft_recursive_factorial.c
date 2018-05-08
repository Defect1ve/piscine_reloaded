/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 16:20:02 by ikotvits          #+#    #+#             */
/*   Updated: 2018/03/19 16:20:03 by ikotvits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
