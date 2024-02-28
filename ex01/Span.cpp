/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:34:14 by asaber            #+#    #+#             */
/*   Updated: 2024/02/27 21:06:29 by asaber           ###   ########.fr       */
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
		throw std::exception();
	else if (Slist.size() < N)
		Slist.push_back((int) nbr);
	else
		std::cout << YELLOW <<"this container is full!" << RESET << std::endl;
}

int Span::shortestSpan()
{
	if (Slist.size() < 2)
		throw std::exception();
	std::vector<int> tmp = Slist;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for(int i = 2; tmp[i]; i++)
	{
		if ((tmp[i] - tmp[i - 1]) < min)
			min = tmp[i] - tmp[i - 1];
	}
	return min;
}


int Span::longestSpan()
{
	if (Slist.size() < 2)
		throw std::exception();
	std::vector<int> tmp = Slist;
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}