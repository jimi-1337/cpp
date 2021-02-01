/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:16:34 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 17:34:08 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
private:
	AWeapon();
protected:
	std::string name;
	int apCost;
	int damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &other);
	virtual ~AWeapon();

	AWeapon &operator=(AWeapon const &other);
	std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack() const = 0;
};

#endif
