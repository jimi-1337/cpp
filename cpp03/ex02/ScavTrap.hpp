/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:19:04 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 15:38:48 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap();
	static std::string challenges[5];
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void challengeNewcomer(void);
};

#endif