/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:53:39 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 17:54:08 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);

Data *deserialize(void *raw);

#endif
