/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:30:14 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/18 17:33:59 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
private:
	Enemy();
protected:
	std::string type;
	int hp;
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &other);
	virtual ~Enemy();

	Enemy &operator=(Enemy const &other);
	std::string getType(void) const;
	int getHP(void) const;
	virtual void takeDamage(int damage);
};

#endif
