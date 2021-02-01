/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:00:52 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 16:17:45 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t):name(n), title(t)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& other)
{
    this->name = other.name;
    this->title = other.title;
    return (*this);
}

std::string Sorcerer::getName(void) const
{
    return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", "
		<< sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return (out);
}