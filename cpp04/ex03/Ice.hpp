/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:19:53 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/20 16:37:02 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
public:
	Ice();
	Ice(Ice const &other);
	virtual ~Ice();

	Ice &operator=(Ice const &other);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
