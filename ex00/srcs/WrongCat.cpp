/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:33:10 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 21:50:27 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat class] type [" << this->type_ << "] Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat class] type [" << this->type_ << "] destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "spit shaaaaa!" << std::endl;
}
