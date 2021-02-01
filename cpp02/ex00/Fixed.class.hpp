/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:11:25 by amoujane          #+#    #+#             */
/*   Updated: 2021/01/04 15:08:41 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
    int value;
    static const int bits = 8;
public :
    Fixed();
    Fixed(Fixed const &val);
    ~Fixed();
    Fixed &operator=(Fixed const &val);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif