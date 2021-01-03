/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:27:16 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/03 15:46:33 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{
private:
    Brain brain;
    std::string name;
public:
    Human(void);
    std::string const *identify(void);
    Brain &GetBrain();
};

#endif