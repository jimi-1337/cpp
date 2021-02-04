/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colombo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:59:36 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 19:10:00 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colombo.hpp"

Base *generate(void)
{
	int r = rand() % 3;

	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}