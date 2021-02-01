/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:17:06 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 17:10:35 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();

	std::string const target;
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	virtual ~PresidentialPardonForm();

	static std::string const &name;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif
