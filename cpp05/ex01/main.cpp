/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:58:30 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/31 17:20:31 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
    	Bureaucrat ayoub("ayoub", 101);
	    std::cout << ayoub << std::endl;

        Bureaucrat anass("anass", 99);
	    std::cout << anass << std::endl;
	    Form form1("Taxes", 100, 50);
	    std::cout << form1 << std::endl;
        // ayoub.signForm(form1);
        // std::cout << form1 << std::endl;
        anass.signForm(form1);
        anass.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}