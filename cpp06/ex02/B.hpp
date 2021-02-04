/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:59:24 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/03 14:36:38 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B: public Base
{
public:
    B(){};
    B(B const &other){};
	virtual ~B(){};
    B &operator=(B const &other);
};

#endif
