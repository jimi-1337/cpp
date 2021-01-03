/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:03:27 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 17:50:51 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():type(std::string()), name(std::string())
{
}

Zombie::Zombie(std::string const &type, std::string const &name):type(type), name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Died" << std::endl;
}

void Zombie::setCharacteristics(std::string const &type, std::string const &name)
{
	this->type = type;
	this->name = name;
}

std::string	Zombie::randomName()
{
	std::string str[10] = {"ayoub", "anass", "yasser", "youness", "oualid", "issam", "zooombie", "yy", "uu", "oo"};

	return (str[std::rand() % 10]);
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
