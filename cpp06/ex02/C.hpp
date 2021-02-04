/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:59:33 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/03 14:37:02 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C: public Base
{
public:
    C(){};
    C(C const &other){};
	virtual ~C(){};
    C &operator=(C const &other);
};

#endif
