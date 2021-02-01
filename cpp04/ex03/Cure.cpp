/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:30:07 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/21 15:37:17 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(Cure const &other):AMateria("cure")
{
	this->_xp = other._xp;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	this->_type = other._type;
	return (*this);
}
AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}