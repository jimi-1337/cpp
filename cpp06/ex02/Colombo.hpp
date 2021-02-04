/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colombo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:59:38 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 19:02:56 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOMBO_HPP
# define COLOMBO_HPP

# include <iostream>
# include <random>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate(void);

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
