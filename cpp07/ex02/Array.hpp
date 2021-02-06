/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:15:28 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 15:42:11 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <exception>
# include <iostream>

template<typename T>
class Array
{
private:
	int length;
	T *elem;
public:
	Array();
	Array(int n);
	Array(Array const &other);
	virtual ~Array();

	class OutOfBoundsException: public std::exception {
		virtual const char* what() const throw();
	};

	Array &operator=(Array const &other);
	T &operator[](int index);

	int size(void) const;
};


template<typename T>
Array<T>::Array():length(0), elem(NULL)
{
}

template<typename T>
Array<T>::Array(int n):length(n), elem(NULL)
{
    this->elem = new T[n];
}

template<typename T>
Array<T>::Array(Array const &other):length(0), elem(NULL)
{
	if (other.length > 0)
	{
		this->elem = new T[other.length];
		for (int i = 0; i < other.length; i++)
			this->elem[i] = other.elem[i];
	}
	this->length = other.length;
}

template<typename T>
Array<T>::~Array()
{
	if (this->length > 0)
		delete[] this->elem;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this->length > 0)
		delete[] this->elem;
	this->elem = NULL;
	if (other.length > 0)
	{
		this->elem = new T[other.length];
		for (int i = 0; i < other.length; i++)
			this->elem[i] = other.elem[i];
	}
	this->length = other.length;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](int index)
{
	if (index >= this->length)
		throw Array::OutOfBoundsException();
	if (index < 0)
		throw Array::OutOfBoundsException();
	return (this->elem[index]);
}

template<typename T>
int Array<T>::size(void) const
{
	return (this->length);
}