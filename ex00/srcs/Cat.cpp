/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 16:48:11 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	: Animal("Cat")
{
	std::cout << this->type_ << " class constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type_ << " class destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "purr... purr... meooooww zzzzzz" << std::endl;
}
