/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:24:27 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 15:37:06 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sconversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "convert: error: bad arguments" << std::endl;
	}
	else
	{
		Sconversion p(argv[1]);
		std::cout << p;
	}
	return (0);
}
