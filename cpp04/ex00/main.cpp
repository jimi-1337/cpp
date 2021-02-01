/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:39:01 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 16:55:46 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    printf("=======================================\n");
    Sorcerer Yennefer("Yennefer", "the hunchback");
    Victim alice("alice");
    Peon bob("bob");
    std::cout << Yennefer << alice << bob;
    robert.polymorph(bob);
    bob = joe;
    robert.polymorph(bob);
    return 0;
}