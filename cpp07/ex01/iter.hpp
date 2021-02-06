/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:07:28 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/05 14:53:05 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int length, void (*f)(T c))
{
	for (int i = 0; i < length; i++)
		(*f)(arr[i]);
}

template<typename T>
void ft_display(T c)
{
    std::cout << c;
}

#endif