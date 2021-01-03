/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 14:51:15 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 17:28:15 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <random>

class Zombie
{
    private:
    std::string     name;
    std::string     type;
    public:
    Zombie();
    Zombie(std::string const &type, std::string const &name);
    ~Zombie();
    void setCharacteristics(std::string const &type, std::string const &name);
    void announce(void);
    static std::string randomName(void);
};

#endif
