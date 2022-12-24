/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:04:23 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 16:50:09 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
	: Animal("Dog")
{
	std::cout << this->type_ << " class constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type_ << " class destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "whiinne whine... zzzzz" << std::endl;
}
