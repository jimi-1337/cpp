/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:16:30 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 18:21:31 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("Crude Spiked Club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("Some other type of Club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude Spiked Club");
		HumanB jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of Club");
		jim.attack();
	}
	return (0);
}
