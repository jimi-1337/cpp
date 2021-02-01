/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:58:28 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/22 18:01:17 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const executeGrade):name(name), sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other):name(other.name), sign(other.sign), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
}

Form &Form::operator=(Form const &other)
{
	this->sign = other.sign;
	return (*this);
}

std::string const Form::getName(void) const
{
	return (this->name);
}

bool Form::isSigned(void) const
{
	return (this->sign);
}

int Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else if (this->sign)
		throw Form::FormAlreadySignedException();
	this->sign = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "(" << form.getName() << ")[" << ((form.isSigned()) ? "Signed" : "Unsigned")
		<< "]<Sign:" << form.getSignGrade() << ",Execute:"
		<< form.getExecuteGrade() << ">";
	return (out);
}