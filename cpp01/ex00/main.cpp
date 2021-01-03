/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 12:35:48 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 13:25:37 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponystack(void)
{
    Pony stack("stack pony", "white");
    
    stack.ft_name();
    stack.ft_color();
}

void ponyheap()
{
    Pony *heap;
    
    heap = new Pony("heap pony", "red");
    heap->ft_name();
    heap->ft_color();
    delete heap;
}

int main(void)
{
	std::cout << "# ponystack:" << std::endl;
	ponystack();
	std::cout << "# ponyheap:" << std::endl;
	ponyheap();
	std::cout << "# Done" << std::endl;
	return (0);
}
