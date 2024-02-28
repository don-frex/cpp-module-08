/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:44:08 by asaber            #+#    #+#             */
/*   Updated: 2024/02/26 13:57:43 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

#define RED     "\x1b[31m"
#define GREEN	"\x1b[32m"
#define RESET   "\x1b[0m"


template <typename T>
typename T::iterator easyfind(T container, int index)
{
	typename T::iterator it = std::find(container.begin(), container.end(), index);
	if (it == container.end())
		throw std::exception();
	return it;
}


#endif