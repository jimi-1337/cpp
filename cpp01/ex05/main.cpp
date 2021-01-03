/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:27:24 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 20:27:25 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.GetBrain().identify() << std::endl;
    return (0);
}