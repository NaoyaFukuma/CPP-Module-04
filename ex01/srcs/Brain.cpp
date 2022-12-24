/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:04:57 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:10:06 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = "No idea";
}

Brain::Brain(Brain &_Brain)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = _Brain.ideas_[i];
}

Brain &Brain::operator=(Brain &_Brain)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = _Brain.ideas_[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void Brain::set_idea(const int i, const std::string &idea)
{
	if (i < 0 || 99 < i)
	{
		std::cout << i << " invalid num, The storage position must be specified as the 0-99th position." << std::endl;
		throw BadPosi("Brain::set_idea()");
	}
	this->ideas_[i] = idea;
}

void Brain::set_ideas(const int begin, const int size, const std::string *ideas)
{
	if (begin + size > 100)
	{
		std::cout << "Too many ideas!" << std::endl;
		throw BadPosi("Brain::set_ideas()");
	}
	for (int i = 0; i < size; ++i)
	{
		this->ideas_[i + begin] = ideas[i];
	}
}

std::string Brain::get_idea(const int i) const
{
	if (i < 0 || 99 < i)
	{
		std::cout << i << " invalid num, The get position must be specified as the 0-99th position." << std::endl;
		throw BadPosi("Brain::get_idea()");
	}
	return (this->ideas_[i]);
}

void Brain::dup_ideas(const Brain &brain)
{
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = brain.ideas_[i];
}
