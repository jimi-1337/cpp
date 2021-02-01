/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:29:24 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/20 16:29:27 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	virtual ~Cure();

	Cure &operator=(Cure const &other);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
