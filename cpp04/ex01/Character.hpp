/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:49:41 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 18:49:52 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	Character();

	std::string name;
	int ap;
	AWeapon *weapon;
public:
	Character(std::string const &name);
	Character(Character const &other);
	virtual ~Character();

	Character &operator=(Character const &other);

	std::string getName(void) const;
	int getAP(void) const;
	AWeapon *getWeapon(void) const;

	void recoverAP(void);
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
};

std::ostream &operator<<(std::ostream &out, Character const &chara);

#endif
