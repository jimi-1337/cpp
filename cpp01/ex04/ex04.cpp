/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:36:56 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/13 18:39:37 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = std::string("HI THIS IS BRAIN");
	std::string	*str_p = &str;
	std::string	&str_r = str;
	std::cout << "str: " << str << std::endl;
	std::cout << "ptr_str: " << *str_p << std::endl;
	std::cout << "ref_str: " << str_r << std::endl;
	return (0);
}
