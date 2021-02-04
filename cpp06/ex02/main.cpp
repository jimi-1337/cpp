/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:59:41 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 19:09:16 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colombo.hpp"

int main(void)
{
	srand(time(NULL));

	Base *o = generate();
	std::cout << "Test 1 : ";
	identify_from_pointer(o);
	std::cout << ", ";
	identify_from_reference(*o);
	std::cout << std::endl;

	return (0);
}
