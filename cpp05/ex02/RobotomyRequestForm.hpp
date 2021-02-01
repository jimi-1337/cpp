/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:17:11 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 17:07:11 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();

	std::string const target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif
