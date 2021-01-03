/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:16:20 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 18:17:13 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();

	void attack(void) const;
};

#endif