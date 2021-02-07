/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoujane <amoujane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:49:12 by amoujane          #+#    #+#             */
/*   Updated: 2021/02/04 17:54:25 by amoujane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> vec(5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		std::vector<int>::iterator found = easyfind(vec, 6);
		if (found == vec.end())
			std::cout << "cannot find 4 in vector" << std::endl;
		else
			std::cout << "found 4 in vector " << *found << std::endl;
		if (easyfind(vec, 99) == vec.end())
			std::cout << "99 not found in vector" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{
		std::deque<int> deque;
		for (int i = 0; i < 5; i++)
			deque.push_back(i);
		std::deque<int>::iterator found = easyfind(deque, 3);
		if (found == deque.end())
			std::cout << "cannot find 3 in deque" << std::endl;
		else
			std::cout << "found 3 in deque " << *found << std::endl;
		if (easyfind(deque, 99) == deque.end())
			std::cout << "99 not found in deque" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{
		std::list<int> lst;
		for (int i = 0; i < 48; i++)
			lst.push_back(i);
		std::list<int>::iterator found = easyfind(lst, 42);
		if (found == lst.end())
			std::cout << "cannot find 42 in list" << std::endl;
		else
			std::cout << "found 42 in list " << *found << std::endl;
		if (easyfind(lst, 99) == lst.end())
			std::cout << "99 not found in list" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{	
		std::set<int> set;
		for (int i = 0; i < 5; i++)
			if (!set.insert(42 + i).second)
				std::cout << "failed to insert " << 42 + i << " in set !" << std::endl;
		std::set<int>::iterator found = easyfind(set, 42);
		if (found == set.end())
			std::cout << "cannot find 42 in set" << std::endl;
		else
			std::cout << "found 42 in set " << *found << std::endl;
		if (easyfind(set, 99) == set.end())
			std::cout << "99 not found in set" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{
		std::multiset<int> multiset;
		for (int i = 0; i < 5; i++)
			multiset.insert(42 + i);
		std::multiset<int>::iterator found = easyfind(multiset, 42);
		if (found == multiset.end())
			std::cout << "cannot find 42 in multiset" << std::endl;
		else
			std::cout << "found 42 in multiset " << *found << std::endl;
		if (easyfind(multiset, 99) == multiset.end())
			std::cout << "99 not found in multiset" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{
		std::map<int, int> map;
		for (int i = 0; i < 5; i++)
			map[i] = i + 42;
		std::map<int, int>::iterator found = easyfind(map, 44);
		if (found == map.end())
			std::cout << "cannot find 44 in map" << std::endl;
		else
			std::cout << "found 44 in map " << found->second << std::endl;
		if (easyfind(map, 99) == map.end())
			std::cout << "99 not found in map" << std::endl;
	}
	std::cout << "-----------------------------\n";
	{
		std::multimap<int, int> multimap;
		for (int i = 0; i < 5; i++)
			multimap.insert(std::pair<int, int>(i, i + 42));
		std::multimap<int, int>::iterator found = easyfind(multimap, 44);
		if (found == multimap.end())
			std::cout << "cannot find 44 in multimap" << std::endl;
		else
			std::cout << "found 44 in multimap " << found->second << std::endl;
		if (easyfind(multimap, 99) == multimap.end())
			std::cout << "99 not found in multimap" << std::endl;
	}
}