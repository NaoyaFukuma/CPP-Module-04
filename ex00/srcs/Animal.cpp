/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:58 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 21:44:50 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
	: type_("unset")
{
	std::cout << "[Animal class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
	: type_(type)
{
	std::cout << "[Animal class] type [" << this->type_ << "] constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "[Animal class] type [" << this->type_ << "] copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal class] type [" << this->type_ << "] destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	std::cout << "[Animal class] type [" << this->type_ << "] assignment operator called" << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "[Animal class] [" << this->type_ << "] makeSound called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type_);
}
