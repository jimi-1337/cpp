/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:04:27 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 19:26:41 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

std::string Rep::strReplace(std::string const &line, std::string const &search, std::string const &replace)
{
	std::stringstream ss;
	size_t j;
	size_t slength = search.length();

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == search[j] && j < slength)
			j++;
		if (j == slength)
		{
			ss << replace;
			i += (j - 1);
		}
		else
			ss << line[i];
	}
	return (ss.str());
}

void Rep::replace(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream file;
	std::ofstream output;
	std::string line;

	if (filename.length() == 0)
		throw "Filename is empty.";
	else if (search.length() == 0)
		throw "Search string is empty.";
	else if (replace.length() == 0)
		throw "Replace string is empty.";
	file.open(filename);
	if (!file.is_open())
		throw "Input File couldn't be opened.";
	output.open(filename + ".replace", std::ios::out);
	if (!output.is_open())
		throw "Output File couldn't be opened.";
	while (std::getline(file, line))
	{
		output << Rep::strReplace(line, search, replace);
		if (!file.eof())
			output << '\n';
    }
	file.close();
	output.close();
}