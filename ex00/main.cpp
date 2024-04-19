/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:53:12 by asaber            #+#    #+#             */
/*   Updated: 2024/04/19 12:54:16 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> arrlist;
	std::list<int> linklist;

	for(size_t i = 0; i < 5; i++)
	{
		arrlist.push_back(i * 3 + 1);
		linklist.push_back(i * 3 + 1);
	}
	
	arrlist.insert(arrlist.begin(), 1337);
	std::vector<int>::iterator it = arrlist.begin();
	std::cout << *it << std::endl;

	try
	{
		std::cout << GREEN << *easyfind(arrlist, 1) << std::endl;
		std::cout << GREEN << *easyfind(arrlist, 13) << std::endl;
		std::cout << GREEN << *easyfind(linklist, 7) << std::endl;
		std::cout << GREEN << *easyfind(linklist, 8) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "not found it in this container" << RESET << std::endl;
	}
	return (0);
}
