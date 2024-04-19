/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:36:50 by asaber            #+#    #+#             */
/*   Updated: 2024/04/19 23:44:37 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

#define RED     "\x1b[31m"
#define GREEN	"\x1b[32m"
#define YELLOW	"\x1b[33m"
#define RESET   "\x1b[0m"

class Span
{
	private:
		unsigned int N;
		std::vector<int> Slist;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span& operator = (const Span &other);
		~Span();
		void addNumber(unsigned int nbr);
		int shortestSpan();
		int longestSpan();
		
		
};


#endif