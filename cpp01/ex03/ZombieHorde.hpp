/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:51:18 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 17:52:10 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string	type;
	int			size;
	Zombie		*zombies;
public:
	ZombieHorde(int size);
	ZombieHorde(std::string const &type, int size);
	~ZombieHorde();

	void announce(void);
};

#endif