/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:51:01 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 14:53:28 by amoujane         ###   ########.fr       */
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

FragTrap::FragTrap(std::string const &name):name(name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &val):name(val.name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
	this->level = val.level;
	this->hitPoints = val.hitPoints;
	this->maxHitPoints = val.maxHitPoints;
	this->energyPoints = val.energyPoints;
	this->maxEnergyPoints = val.maxEnergyPoints;
	this->meleeAttackDamage = val.meleeAttackDamage;
	this->rangedAttackDamage = val.rangedAttackDamage;
	this->armorDamageReduction = val.armorDamageReduction;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... death."  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &val)
{
	this->name = val.name;
	this->level = val.level;
	this->hitPoints = val.hitPoints;
	this->maxHitPoints = val.maxHitPoints;
	this->energyPoints = val.energyPoints;
	this->maxEnergyPoints = val.maxEnergyPoints;
	this->meleeAttackDamage = val.meleeAttackDamage;
	this->rangedAttackDamage = val.rangedAttackDamage;
	this->armorDamageReduction = val.armorDamageReduction;
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

bool FragTrap::takeDamage(unsigned int amount)
{
	int dealt = amount - this->armorDamageReduction;
	this->hitPoints -= dealt;
	if (this->hitPoints < 0)
	{
		dealt += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << this->name << " take "
			<< dealt << " points of damage!" << std::endl;
	return (this->hitPoints == 0);
}

void FragTrap::beRepaired(unsigned int amount)
{
	int healed = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		healed -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << this->name << " is repaired for "
			<< healed << "!" << std::endl;
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
