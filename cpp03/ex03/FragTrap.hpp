/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:33:39 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/05 16:54:39 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	FragTrap();
protected:
	static std::string quotes[5];
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif