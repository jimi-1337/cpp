/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:53:52 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 18:33:04 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void *serialize(void)
{
	std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";

    int alphalen = alphabet.length();
    char *raw;
    

    raw = new char[52];
    for(int i = 0; i < 8; i++)
        raw[i] = alphabet[rand() % alphalen];
    *reinterpret_cast<int*>(raw + 24) = rand() % 42;
    for(int i = 0; i < 8; i++)
        raw[i + 28] = alphabet[rand() % alphalen];
    return (raw);
}

Data *deserialize(void *raw)
{
    Data *d = new Data;
    
    d->s1 = std::string(static_cast<char*>(raw), 8);
    d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 24);
    d->s2 = std::string(static_cast<char*>(raw) + 28, 8);
    return (d);
}