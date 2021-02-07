/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:50:21 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 18:16:48 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <set>
# include <cmath>
# include <algorithm>

class Span
{
private:
	Span();

	unsigned int max;
	std::set<int> numbers;
public:
	Span(unsigned int amount);
	Span(Span const &other);
	virtual ~Span();

	class FullSpanException: public std::exception {
		virtual const char* what() const throw();
	};
	class NotEnoughNumbersException: public std::exception {
		virtual const char* what() const throw();
	};

	Span &operator=(Span const &other);

	template<typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end);
	void addNumber(int value);

	int shortestSpan(void) const;
	int longestSpan(void) const;
};

template<typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end)
{
	if (this->numbers.size() + std::distance(begin, end) > this->max)
		throw Span::FullSpanException();
	this->numbers.insert(begin, end);
}