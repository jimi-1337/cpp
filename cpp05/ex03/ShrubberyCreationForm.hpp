/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:17:16 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 16:36:34 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();

	std::string const target;
	static std::string const trees[3];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();

	class TargetFileOpenException: public std::exception {
		virtual const char* what() const throw();
	};
	class WriteException: public std::exception {
		virtual const char* what() const throw();
	};

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif
