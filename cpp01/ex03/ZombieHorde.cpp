/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:53:11 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/03 15:33:22 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size):type(std::string()), size(size)
{
	if (size > 0)
	{
		this->zombies = new Zombie[size];
		for (int i = 0; i < size; i++)
			this->zombies[i].setCharacteristics(this->type, Zombie::randomName());
	}
	else
		std::cout << "# Not enough zombies !" << std::endl;
}

ZombieHorde::ZombieHorde(std::string const &type, int size):type(type), size(size)
{
	if (size > 0)
	{
		this->zombies = new Zombie[size];
		for (int i = 0; i < size; i++)
			this->zombies[i].setCharacteristics(this->type, Zombie::randomName());
	}
	else
		std::cout << "# Not enough zombies !" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Horde " << this->type << " is being destroyed !" << std::endl;
	delete[] this->zombies;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->size; i++)
		this->zombies[i].announce();
}
