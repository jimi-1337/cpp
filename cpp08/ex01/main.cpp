/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:50:17 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 18:54:32 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(10);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::vector<int> tmp(5);
        int j = 0;
        for (int i = 0; i < 5; i++)
        {
            if (j == 0)
            {
                tmp[i] = i;
                j = 1;
            }
            else
                tmp[i] = i + 42;
        }
        sp.addNumber(tmp.begin(), tmp.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}