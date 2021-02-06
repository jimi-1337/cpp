/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:11:28 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/05 14:59:10 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char str[] = "ayoub";
    int tab[] = {1, 2, 3, 4, 5};
    
    std::cout << "value of string : ";
    ::iter(str, 5, ::ft_display);
    std::cout << std::endl;
    std::cout << "value of tab int : ";
    ::iter(tab, 5, ::ft_display);
    std::cout << std::endl;
    return (0);
}