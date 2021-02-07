/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:50:38 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/06 14:38:44 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other):std::stack<T>(other)
{
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &other)
{
	this->c = other.c;
	return (*this);
}
