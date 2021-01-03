/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:24:45 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 17:22:46 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	std::string	type;
public:
	ZombieEvent();

	void 		setZombieType(std::string const &type);
	Zombie		*newZombie(std::string const &name);
	Zombie		*randomChump(void);
};

#endif
