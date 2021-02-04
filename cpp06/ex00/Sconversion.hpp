/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sconversion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:21:24 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/02 17:14:05 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCONVERSION_HPP
# define SCONVERSION_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>

class	Sconversion
{
private:
	Sconversion();
	
	std::string str;
	int type;

	int status[4];
	int ivalue;
	float fvalue;
	double dvalue;
	char cvalue;
	long lvalue;
	
	enum Type {
		TypeChar,
		TypeInt,
		TypeFloat,
		TypeDouble,
		TypeInvalid
	};
	
public:	
	Sconversion(std::string value);
	Sconversion(Sconversion const &other);
	virtual ~Sconversion();
	
	void parse(void);
	
	void convert(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);
	void fromChar(void);

	void setFlag(int status, int flag);
	
	Sconversion &operator=(Sconversion const &other);

	bool doubleIsValue(void) const;
	bool floatIsValue(void) const;
	bool hasFlag(int status, int flag) const;

	static const int isImpossible = 0x00000001;
	static const int nonDisplayable = 0x0000010;

	int getAsInt(void) const;
	float getAsFloat(void) const;
	double getAsDouble(void) const;
	char getAsChar(void) const;
	std::string getRaw(void) const;
};

std::ostream &operator<<(std::ostream &out, Sconversion const &other);

#endif