/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:37:20 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 18:18:29 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent brainless;
	ZombieEvent heartless;
	Zombie *brainlessZombies[5];
	Zombie *heartlessZombies[5];
    Zombie redZombies[5];
    Zombie blueZombies[5];
	Zombie *ayoub;

    brainless.setZombieType("brainless");
	std::cout << "# Creating ayoub" << std::endl;
	ayoub = brainless.newZombie("ayoub");
	ayoub->announce();
    std::cout << "# Creating 5 brainless Zombie" << std::endl;
	for (int i = 0; i < 5; i++)
		brainlessZombies[i] = brainless.randomChump();
    heartless.setZombieType("heartless");
    std::cout << "# Creating 5 heartless Zombie" << std::endl;
	for (int i = 0; i < 5; i++)
		heartlessZombies[i] = heartless.randomChump();
    std::cout << "## Creating 5 Red and Blue Zombie" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		redZombies[i].setCharacteristics("Red", Zombie::randomName());
		blueZombies[i].setCharacteristics("Blue", Zombie::randomName());
	}
	for (int i = 0; i < 5; i++)
	{
		redZombies[i].announce();
		blueZombies[i].announce();
	}
    std::cout << "# Clean All brainless Zombies" << std::endl;
	for (int i = 0; i < 5; i++)
		delete brainlessZombies[i];
    std::cout << "# Clean All heartless Zombies" << std::endl;
    for (int i = 0; i < 5; i++)
		delete heartlessZombies[i];
	std::cout << "# killing ayoub" << std::endl;
	delete ayoub;
    std::cout << "----dead zombies both of the red and the blue----" << std::endl;
    return (0);
}