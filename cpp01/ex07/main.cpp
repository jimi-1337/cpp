/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:56:29 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 19:20:22 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Rep.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
		std::cout << "Invalid number of arguments." << std::endl;
	else
	{
		try
		{
			Rep::replace(argv[1], argv[2], argv[3]);
		}
		catch(char const *e)
		{
			std::cout << "replace: error: " << e << std::endl;
		}
	}
	return (0);
}
