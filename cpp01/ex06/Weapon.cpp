/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:16:35 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 18:40:52 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type):type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}

std::string const Weapon::getType(void)
{
	return (this->type);
}