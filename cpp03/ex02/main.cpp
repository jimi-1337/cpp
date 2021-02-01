/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:18:59 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 15:42:20 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap frag("FR4G");
	ScavTrap scav("SC4V");
    ClapTrap clap("CL4P");

	srand(time(NULL));
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.meleeAttack("CL4P-TP");
	frag.rangedAttack("CL4P-TP");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");

	std::cout << "---" << std::endl;

	scav.challengeNewcomer();
	scav.meleeAttack("CL4P-TP");
	scav.rangedAttack("CL4P-TP");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(42);
	scav.takeDamage(100);
	scav.beRepaired(125);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
    
    std::cout << "---" << std::endl;
	clap.meleeAttack("CL4P-TP");
	clap.rangedAttack("CL4P-TP");
	clap.takeDamage(24);
	clap.beRepaired(50);
	clap.takeDamage(42);
	clap.takeDamage(100);
	clap.beRepaired(125);
	return (0);
}