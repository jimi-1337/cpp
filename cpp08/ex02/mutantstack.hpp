/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:50:40 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/06 14:50:27 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:

	MutantStack(){}
	MutantStack(MutantStack<T> const &other);
	virtual ~MutantStack(){}

	MutantStack<T> &operator=(MutantStack<T> const &other);
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator begin(void);
	const_iterator cbegin(void) const;
	reverse_iterator rbegin(void);
	const_reverse_iterator crbegin(void) const;
	iterator end(void);
	const_iterator cend(void) const;
	reverse_iterator rend(void);
	const_reverse_iterator crend(void) const;
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void) const
{
	return (this->c.crbegin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void) const
{
	return (this->c.cend());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void) const
{
	return (this->c.crend());
}

#endif
