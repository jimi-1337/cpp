/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:57:26 by amoujane          #+#    #+#             */
/*   Updated: 2020/12/14 19:32:34 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REP_HPP
# define REP_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Rep
{
private:
	static std::string strReplace(std::string const &line, std::string const &search, std::string const &replace);
public:
	static void replace(std::string const &filename, std::string const &search, std::string const &replace);
};

#endif