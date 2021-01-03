/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:20:28 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/12 20:01:14 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		main(void)
{
	Annuaire annuaire;
	std::string command;

	annuaire.show_startup();

	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			annuaire.add_contact();
		else if (command == "SEARCH")
			annuaire.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			break ;
		}
	}
	return (0);
}
