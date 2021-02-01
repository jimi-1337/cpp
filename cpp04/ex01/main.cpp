/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:08:11 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/21 16:35:38 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
	std::cout << b->getHP() << std::endl;
	me->attack(b);
    std::cout << *me;

    std::cout << "---" << std::endl;

	Character you("you");

	Enemy* s = new SuperMutant();

	you.equip(pr);
	std::cout << you;
	you.equip(pf);
	std::cout << you;
	you.equip(NULL);
	std::cout << you;

	you.attack(s);
	you.equip(pf);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;
	you.attack(s);
	std::cout << you;

	Enemy* e = new Enemy(51, "Worm");

	you.attack(e);
	std::cout << you;
	you.attack(e);
	std::cout << you;

	Character charaFriend(you);
	std::cout << charaFriend;
	charaFriend = you;
	std::cout << charaFriend;

	SuperMutant m;
	SuperMutant m2(m);
	std::cout << m.getType() << " and " << m2.getType() << std::endl;
	m2 = m;
	std::cout << m.getType() << " and " << m2.getType() << std::endl;

	RadScorpion sc;
	RadScorpion sc2(sc);
	std::cout << sc.getType() << " and " << sc2.getType() << std::endl;
	sc2 = sc;
	std::cout << sc.getType() << " and " << sc2.getType() << std::endl;

	delete e;
	delete pr;
	delete pf;
    delete me;

	return (0);
    return 0;
}