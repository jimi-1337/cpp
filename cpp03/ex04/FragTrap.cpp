/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:27:04 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 18:52:30 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::quotes[5] = {
	"Take that!",
	"Get off my lawn!",
	"Coffee? Black... like my soul.",
	"I am Fire, I am Death!",
	"Lightening! Kukachow!"
};

FragTrap::FragTrap(std::string const &name):ClapTrap(name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &other):ClapTrap(other.name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
	ClapTrap::copy(other);
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... death."  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks "
			<< target << " at melee, causing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks "
			<< target << " at range, causing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": "
				<< FragTrap::quotes[rand() % 5] << std::endl
				<< this->name << " attacks "
				<< target << " for " << ((rand() % this->meleeAttackDamage) + 1)
				<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name
				<< " is out of energy!" << std::endl;
	}
}
