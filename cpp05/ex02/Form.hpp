/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:58:22 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 16:28:44 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	Form();

	std::string const name;
	bool sign;
	int const signGrade;
	int const executeGrade;
public:
	Form(std::string const &name, int const signGrade, int const executeGrade);
	Form(Form const &other);
	virtual ~Form();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
	class UnsignedFormException: public std::exception {
		virtual const char* what() const throw();
	};

	Form &operator=(Form const &other);

	std::string const getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void signForm(void);

	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
