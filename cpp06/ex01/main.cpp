/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:53:55 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 18:32:09 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main()
{
    srand(time(NULL));

    void *raw = serialize();
    Data *dt = deserialize(raw);
    std::cout << "s1\t" << dt->s1 << std::endl;
    std::cout << "n\t" << dt->n << std::endl;
    std::cout << "s2\t" << dt->s2 << std::endl;
    return (0);
}