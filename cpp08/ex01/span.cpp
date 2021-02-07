/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:50:19 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 18:10:19 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int amount):max(amount)
{
}

Span::Span(Span const &other):max(other.max)
{
	this->numbers.clear();
	this->numbers = other.numbers;
}

Span::~Span()
{
	this->numbers.clear();
}

const char* Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "SpanException: not enough numbers in Span";
}

Span &Span::operator=(Span const &other)
{
	this->max = other.max;
	this->numbers.clear();
	this->numbers = other.numbers;
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->numbers.size() == this->max)
		throw Span::FullSpanException();
	this->numbers.insert(value);
}

int Span::shortestSpan(void) const
{
	int size = this->numbers.size();
	if (size <= 1)
		throw Span::NotEnoughNumbersException();

	std::multiset<int>::iterator first = this->numbers.begin();
	std::multiset<int>::iterator next = ++this->numbers.begin();
	int minDiff = std::abs(*next++ - *first++);
	while (next != this->numbers.end())
	{
		int diff = std::abs(*next - *first);
		if (diff < minDiff)
			minDiff = diff;
		first++;
		next++;
	}
	return (minDiff);
}

int Span::longestSpan(void) const
{
	if (this->numbers.size() <= 1)
		throw Span::NotEnoughNumbersException();

	int biggest = *std::max_element(this->numbers.begin(), this->numbers.end());
	int smallest = *std::min_element(this->numbers.begin(), this->numbers.end());
	return (std::abs(biggest - smallest));
}
