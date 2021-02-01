/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:40:27 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/19 18:33:30 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():count(0), units(NULL)
{
}

Squad::Squad(Squad const &other)
{
	int i;
	this->count = other.count;
	for (i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad()
{
	int i;

	if(this->units)
	{
		for(i = 0; i < this->count ; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	int i;

	if (this->units)
	{
		for(i = 0; i < this->count ; i++)
			delete this->units[i];
		delete this->units;
		this->units = NULL;
	}
	this->count = 0;
	for (i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->count == 0 || index < 0 || index >= this->count)
		return (NULL);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete [] this->units;
		this->units = cpy;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}