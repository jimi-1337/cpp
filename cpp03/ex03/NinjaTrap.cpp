/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:33:44 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 18:24:37 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name):ClapTrap(name)
{
	std::cout << this->name << ": setting up traps..." << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other):ClapTrap(other.name)
{
	std::cout << this->name << ": setting up traps..." << std::endl;
	ClapTrap::copy(other);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": I will leave, for now."  << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " swing his Katana and deals "
			<< this->meleeAttackDamage << " points of damage to "
			<< target << "!" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " throw a Shuriken at "
			<< target << " and deals " << this->meleeAttackDamage
			<< " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " tries to tickle " << trap.getName()
			<< " but realize he has no feets." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energyPoints >= 20)
	{
		this->energyPoints -= 20;
		std::cout << this->name << " try to cut trough " << trap.getName()
				<< " and damage him for " << this->rangedAttackDamage << "!" << std::endl;
		trap.takeDamage(this->rangedAttackDamage);
	}
	else
		std::cout << this->name << " is too tired." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if ((rand() % 100) > 50)
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " and damage him for " << this->rangedAttackDamage << "!" << std::endl;
	}
	else
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " but misses" << std::endl;
	}
}
