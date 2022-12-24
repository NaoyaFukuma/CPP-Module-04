/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 21:45:14 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "[Cat class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat class] type [" << this->type_ << "] destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[Cat class] purr... purr... meooooww zzzzzz" << std::endl;
}
