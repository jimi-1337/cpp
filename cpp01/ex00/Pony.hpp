/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 12:40:16 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 13:54:58 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony{
    std::string    name;
    std::string    color;
    int *tab;
    public :
        Pony(std::string const &name, std::string const &color);
        ~Pony();
        void ft_name(void);
        void ft_color(void);
};
