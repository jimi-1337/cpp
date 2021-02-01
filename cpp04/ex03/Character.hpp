/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:19:45 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/20 19:09:06 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_HPP
# define CHARACHTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	Character();
	std::string name;
	int equipped;
	AMateria *invantory[4];
public:
	Character(std::string const &name);
	Character(Character const &name);
	virtual ~Character();
	
	Character &operator=(Character const &name);

	std::string const &getName(void) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
