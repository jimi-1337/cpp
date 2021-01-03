/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 12:44:12 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 14:00:32 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const &name, std::string const &color):color(color),name(name)
{
    std::cout << "Pony \"" << this->name << "\" has been constructed !" << std::endl;
}

void Pony::ft_name(void)
{
    std::cout << "My name is :" << this->name << std::endl;
}

void Pony::ft_color(void)
{
    std::cout << "My color is :" << this->color << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony \"" << this->name << "\" has been destructed !" << std::endl;
}
