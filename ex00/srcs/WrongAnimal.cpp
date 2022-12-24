/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:11:18 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 16:56:52 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
	: type_("Wrong Anonymous")
{
	std::cout << this->type_ << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type_(type)
{
	std::cout << "WrongAnimal " << this->type_ << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal " << this->type_ << " copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->type_ << " destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	std::cout << "WrongAnimal " << this->type_ << " assignment operator called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal class [" << this->type_ << "] makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type_);
}
