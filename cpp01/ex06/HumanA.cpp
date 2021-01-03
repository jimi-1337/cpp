/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:16:17 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 18:17:37 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon):name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}