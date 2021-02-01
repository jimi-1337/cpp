/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:16:59 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/31 14:15:46 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	srand(time(NULL));
    try
    {
    	Bureaucrat ayoub("ayoub", 145);
	    ShrubberyCreationForm form1("Home");
        Bureaucrat anass("anass", 1);
        Intern test;

        Form *rrf;
        rrf = test.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        anass.signForm(*rrf);
        rrf->execute(anass);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}