/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:33:10 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 16:57:08 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << this->type_ << " class constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type_ << " class destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "spit shaaaaa!" << std::endl;
}
