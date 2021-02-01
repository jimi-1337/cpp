/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:33:36 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 16:34:06 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(Peon const &peon);
	~Peon();

	Peon &operator=(const Peon& other);

	void getPolymorphed(void) const;
};

#endif
