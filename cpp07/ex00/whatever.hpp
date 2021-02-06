/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:51:59 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/03 17:52:54 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T &min(T &a, T &b)
{
	if (b > a)
		return (a);
	return (b);
}

template<typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif