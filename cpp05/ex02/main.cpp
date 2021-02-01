/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:16:59 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/31 14:22:10 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void)
{
	srand(time(NULL));
    try
    {
    	Bureaucrat ayoub("ayoub", 1);
        Bureaucrat anass("anass", 1);
	    PresidentialPardonForm form1("karin");
        ShrubberyCreationForm form2("Home");
		RobotomyRequestForm form3("robot");

	    std::cout << ayoub << std::endl;
	    std::cout << form1 << std::endl;
        ayoub.signForm(form1);
        std::cout << form1 << std::endl;
		form1.execute(anass);
		ayoub.signForm(form2);
        std::cout << form2 << std::endl;
		form2.execute(ayoub);
		anass.signForm(form3);
        std::cout << form3 << std::endl;
		form3.execute(anass);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}