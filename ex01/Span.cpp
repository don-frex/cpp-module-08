/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:34:14 by asaber            #+#    #+#             */
/*   Updated: 2024/04/19 22:35:54 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : N(0)
{}

Span::Span(unsigned int n) : N(n)
{}

Span::Span(const Span &other)
{
	this->N = other.N;
	this->Slist = other.Slist;
}

Span::~Span()
{}

Span& Span::operator= (const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->Slist = other.Slist;
	}
	return *this;
}

void Span::addNumber(unsigned int nbr)
{
	std::vector<int>::iterator ito = std::find(Slist.begin(), Slist.end(), nbr);
	if (ito != Slist.end())
		throw std::runtime_error("This Number already added!");
	else if (Slist.size() < N)
		Slist.push_back((int) nbr);
	else
		std::cout << YELLOW <<"this container is full!" << RESET << std::endl;
}

int Span::shortestSpan()
{
	if (Slist.size() < 2)
		throw std::runtime_error("you can't use \"shortestSpan\" with one number!");
	std::sort(Slist.begin(), Slist.end());
	int min = Slist[1] - Slist[0];
	std::vector<int>::iterator it = Slist.begin() + 1;
	for(; it != Slist.end() - 1; it++)
	{
		if (min > (*(it + 1) - *it))
			min = *(it + 1) - *it;
	}
	return min;	
}


int Span::longestSpan()
{
	if (Slist.size() < 2)
		throw std::runtime_error("you can't use \"longestSpan\" with one number!");
	std::sort(Slist.begin(), Slist.end());
	std::vector<int>::iterator itmax = Slist.end() - 1;
	std::vector<int>::iterator itmin = Slist.begin();
	return *itmax - *itmin;
}