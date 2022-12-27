/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:58 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 21:44:50 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
	: type_("unset")
{
	std::cout << "[WrongAnimal class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type_(type)
{
	std::cout << "[WrongAnimal class] type [" << this->type_ << "] constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "[WrongAnimal class] type [" << this->type_ << "] copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal class] type [" << this->type_ << "] destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	std::cout << "[WrongAnimal class] type [" << this->type_ << "] assignment operator called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal class] [" << this->type_ << "] makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type_);
}
