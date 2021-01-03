/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:16:27 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 18:43:32 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string const &name);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack(void);
};

#endif