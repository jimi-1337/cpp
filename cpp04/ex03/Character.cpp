/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:19:42 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/21 15:43:37 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->invantory[i] = NULL;
}

Character::Character(Character const &other):name(other.name), equipped(0)
{
	for (int i = 0; i < this->equipped; i++)
		this->equip(other.invantory[i]->clone());
	for(int i = 0; i < this->equipped; i++)
		this->invantory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->invantory[i];
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->invantory[i];
	this->equipped = 0;
	for (int i = 0; i < this->equipped; i++)
		this->equip(other.invantory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->invantory[i] = NULL;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->equipped == 4 || m == NULL)
		return ;
	this->invantory[this->equipped] = m;
	this->equipped++;
}

void Character::unequip(int idx)
{
	int i;
	if (idx < 0 || idx >= this->equipped || this->invantory[idx] == NULL)
		return ;
	for (i = idx; i < 3; i++)
	{
		this->invantory[i] = this->invantory[i + 1];
	}
	this->invantory[i] = NULL;
	this->equipped--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->equipped || this->invantory[idx] == NULL)
		return ;
	this->invantory[idx]->use(target);
}
