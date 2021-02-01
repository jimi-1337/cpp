/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:55:28 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/31 17:22:27 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat ayoub("ayoub", 149);
		std::cout << ayoub << std::endl;
		ayoub.decrementGrade();
		std::cout << ayoub << std::endl;
		ayoub.incrementGrade();
		std::cout << ayoub << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

}