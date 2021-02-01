/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:27:16 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 18:47:54 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
	NinjaTrap();
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	virtual ~NinjaTrap();

	NinjaTrap &operator=(NinjaTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
};

#endif