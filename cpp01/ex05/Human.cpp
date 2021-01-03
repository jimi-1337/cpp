/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:27:08 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/03 15:46:27 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void):name("sam")
{
}

std::string const *Human::identify(void)
{
    return (this->brain.identify());
}
Brain &Human::GetBrain()
{
    return (this->brain);
}