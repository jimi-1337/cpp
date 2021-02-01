/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:17:04 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 17:11:31 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):Form("Presidential Pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):Form(other), target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
