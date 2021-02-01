/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:19:50 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/21 15:42:42 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(Ice const &other):AMateria("ice")
{
	this->_xp = other._xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &other)
{
	this->_xp = other._xp;
	this->_type = other._type;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
