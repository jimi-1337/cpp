/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:19:15 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/03 15:40:42 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	std::cout << "-----------# Creating Horde brainless with 5 Zombie-------------" << std::endl;
	ZombieHorde brainless("brainless", 5);
	brainless.announce();
	std::cout << "------------# Creating Horde heartless with 5 Zombie------------" << std::endl;
	ZombieHorde heartless("heartless", 5);
	heartless.announce();
    std::cout << "------------## Creating Horde Red with 5 Zombie----------------" << std::endl;
	ZombieHorde red("Red", 5);
	red.announce();
	std::cout << "------------## Creating Horde Blue with 5 Zombie---------------" << std::endl;
	ZombieHorde blue("Blue", 5);
	blue.announce();
	return (0);
}
