/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 15:15:15 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
	: A_Animal("Dog")
{
	std::cout << "[Dog class] type [" << this->type_ << "] Default constructor called" << std::endl;
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

Dog::Dog(const std::string &type)
{
	this->type_ = type;
	std::cout << "[Dog class] type [" << this->type_ << "]  constructor called" << std::endl;
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

Dog::Dog(const Dog &src)
	: A_Animal(src.type_)
{
	std::cout << "[Dog class] Copy constructor called" << std::endl;
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

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "[Dog class] Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type_ = rhs.type_;
	this->brain_->dup_ideas(*(rhs.brain_));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog class] type [" << this->type_ << "] destructor called" << std::endl;
	delete this->brain_;
}

std::string Dog::get_idea(const int i)
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

void Dog::makeSound() const
{
	std::cout << "[Dog class] whiinne whine... zzzzz" << std::endl;
}

void Dog::set_idea(const int i, const std::string &idea)
{
	this->brain_->set_idea(i, idea);
}

void Dog::set_ideas(const int begin, const int size, const std::string *ideas)
{
	this->brain_->set_ideas(begin, size, ideas);
}
