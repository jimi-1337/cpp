/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:17:14 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/30 17:09:13 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::trees[3] = {
	"        :\n" \
	"        :\n" \
	" :     :::     :\n" \
	" ::    :::    ::\n" \
	"  ::   :::   ::\n" \
	"    :: ::: ::\n" \
	"'::: :: | :: :::'\n" \
	"    :::\\|/:::\n" \
	"       bly\n" \
	"       ^M^\n",
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n",
	"       ###\n" \
	"      #o###\n" \
	"    #####o###\n" \
	"   #o#\\#|#/###\n" \
	"    ###\\|/#o#\n" \
	"     # }|{  #\n" \
	"       }|{\n"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):Form("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}

const char* ShrubberyCreationForm::WriteException::what() const throw()
{
	return "ShrubberyCreationFormException: Error while writing to the file";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string const shrubName = (this->target + "_shrubbery");
	std::ofstream outfile(shrubName, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	for (int i = 0; i < 3; i++)
	{
		outfile << ShrubberyCreationForm::trees[rand() % 3];
		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteException();
		}
	}
	outfile << std::endl;
	outfile.close();
}
