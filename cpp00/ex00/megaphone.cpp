/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:33:50 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/12 14:11:27 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		ft_toupp(int i)
{
	return (i - 32);
}

void	ft_fix_av(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str [i] <= 122)
			str[i] = ft_toupp((int)str[i]);
		i++;
	}
	std::cout << str;
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if ( ac != 1)
	{
		while (i < ac)
		{
			ft_fix_av(av[i]);
			i++;
		}
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (1);
}
