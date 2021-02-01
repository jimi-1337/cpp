/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:55:25 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/22 15:52:39 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
private:
	Bureaucrat();

	std::string const name;
	int grade;
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	virtual ~Bureaucrat();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string const getName(void) const;
	int getGrade(void) const;

	void incrementGrade(void);
	void decrementGrade(void);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
