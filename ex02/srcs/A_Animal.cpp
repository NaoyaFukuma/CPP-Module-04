/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:58 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 15:08:19 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include <iostream>

A_Animal::A_Animal()
	: type_("unset")
{
	std::cout << "[A_Animal class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

A_Animal::A_Animal(std::string type)
	: type_(type)
{
	std::cout << "[A_Animal class] type [" << this->type_ << "] constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal &src)
{
	*this = src;
	std::cout << "[A_Animal class] type [" << this->type_ << "] copy constructor called" << std::endl;
}

A_Animal::~A_Animal()
{
	std::cout << "[A_Animal class] type [" << this->type_ << "] destructor called" << std::endl;
}

A_Animal &A_Animal::operator=(const A_Animal &rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	std::cout << "[A_Animal class] type [" << this->type_ << "] assignment operator called" << std::endl;
	return (*this);
}

std::string A_Animal::getType() const
{
	return (this->type_);
}
