/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:43:13 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 18:55:38 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        std::string tab[3];
        Form *f_tab[3];
    public:
        Intern();
        Intern &operator=(Intern const a);
        class FormDoesNotExist: public std::exception
        {
            virtual const char* what() const throw();
        };
        Form *makeForm(std::string name, std::string target);
        ~Intern();
};


#endif
