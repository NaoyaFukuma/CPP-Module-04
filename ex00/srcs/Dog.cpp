/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 22:06:53 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "[Dog class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog class] type [" << this->type_ << "] destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "[Dog class] whiinne whine... zzzzz" << std::endl;
}
