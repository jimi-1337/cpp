/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:43:10 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 18:55:53 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    tab[0] = "robotomy request";
    tab[1] = "shrubbery creation";
    tab[2] = "presidential pardon";
}

const char*Intern::FormDoesNotExist::what() const throw()
{
    return "The Form Doesn't Exist";
}


Intern &Intern::operator=(Intern const a)
{
    (void)a;
    return (*this);
}

Intern::~Intern()
{
    
}

Form *Intern::makeForm(std::string name, std::string target)
{
    int num;
    int i;
    Form *ret;

    i = 0;
    num = -1;
    f_tab[0] = new RobotomyRequestForm(target);
    f_tab[1] = new ShrubberyCreationForm(target);
    f_tab[2] = new PresidentialPardonForm(target);
    while (i < 3)
    {
        if (this->tab[i] == name && num == -1)
        {
            ret = f_tab[i];
            num = i;
            i = 0;
        }
        if (num != -1 && num != i)
            delete f_tab[i];
        i++;
    }
    if (num != -1)
    {
        std::cout << "Intern creates <" + name + ">" << std::endl;
        return (ret);
    }
    throw(Intern::FormDoesNotExist());
    return (NULL);
}