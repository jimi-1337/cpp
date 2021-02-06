/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:20:25 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 15:40:45 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> intR;

	Array<int> intRR(5);
	intR = intRR;
	for (int i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
	Array<float> floatR(6);
	for (int i = 0; i < floatR.size(); i++)
	{
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;
	Array<std::string> stringR(5);
	for (int i = 0; i < stringR.size(); i++)
	{
		stringR[i] = i + 65;
		std::cout << stringR[i] << "s ";
	}
	std::cout << std::endl;
    
	Array<std::string> stringRR = stringR;
	for (int i = 0; i < 5; i++)
		stringRR[i] = "42";
	for (int i = 0; i < stringR.size(); i++)
		std::cout << stringR[i] << "s <> " << stringRR[i] << std::endl;

    std::cout << "-------------------------\n";

	try
	{
		intRR[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intRR[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}