/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 15:15:03 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	: A_Animal("Cat")
{
	std::cout << "[Cat class] type [" << this->type_ << "] Default constructor called" << std::endl;
	try
	{
		this->brain_ = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

Cat::Cat(const std::string &type)
{
	this->type_ = type;
	std::cout << "[Cat class] type [" << this->type_ << "]  constructor called" << std::endl;
	try
	{
		this->brain_ = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

Cat::Cat(const Cat &src)
	: A_Animal(src.type_)
{
	std::cout << "[Cat class] Copy constructor called" << std::endl;
	try
	{
		this->brain_ = new Brain;
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
	this->brain_->dup_ideas(*src.brain_);
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "[Cat class] Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type_ = rhs.type_;
	this->brain_->dup_ideas(*(rhs.brain_));
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat class] type [" << this->type_ << "] destructor called" << std::endl;
	delete this->brain_;
}

void Cat::makeSound() const
{
	std::cout << "[Cat class] purr... purr... meooooww zzzzzz" << std::endl;
}

std::string	Cat::get_idea(const int i)
{
	std::string tmp;
	try
	{
		tmp = brain_->get_idea(i);
	}
	catch(const BadPosi &e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (tmp);
}

void Cat::set_idea(const int i, const std::string &idea)
{
	this->brain_->set_idea(i, idea);
}

void Cat::set_ideas(const int begin, const int size, const std::string *ideas)
{
	this->brain_->set_ideas(begin, size, ideas);
}
