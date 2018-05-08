/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 17:25:19 by ikotvits          #+#    #+#             */
/*   Updated: 2018/03/19 17:25:20 by ikotvits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		s;
	char	*tmp;

	i = -1;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			s = 0;
			while (argv[i][s] == argv[j][s])
				s++;
			if (argv[i][s] > argv[j][s])
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}
	ft_print_params(argc, argv);
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
