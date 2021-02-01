/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:51:10 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 14:57:10 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string ScavTrap::challenges[5] = {
	"Did you try to open me?",
	"A single mag won't be enough!",
	"Let's get this party started!",
	"You call yourself a badass?",
	"Did someone feel something?"
};

ScavTrap::ScavTrap(std::string const &name):name(name)
{
	std::cout << this->name << ": Locking the door." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &val):name(val.name)
{
	std::cout << this->name << ": Locking the door." << std::endl;
	this->level = val.level;
	this->hitPoints = val.hitPoints;
	this->maxHitPoints = val.maxHitPoints;
	this->energyPoints = val.energyPoints;
	this->maxEnergyPoints = val.maxEnergyPoints;
	this->meleeAttackDamage = val.meleeAttackDamage;
	this->rangedAttackDamage = val.rangedAttackDamage;
	this->armorDamageReduction = val.armorDamageReduction;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": Door breached."  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &val)
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

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " made a melee attack to "
			<< target << " dealing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " made a ranged attack to "
			<< target << " dealing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

bool ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->name << ": ";
	std::cout << ScavTrap::challenges[rand() % 5] << std::endl;
}
