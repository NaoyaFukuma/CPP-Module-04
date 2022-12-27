/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:09:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:34:17 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include <cstdlib>
#include <iostream>

Ice::Ice()
	: AMateria("ice")
{
	std::cout << "[Ice class] defalut constractor" << std::endl;
}

Ice::Ice(Ice const &src)
	: AMateria("ice")
{
	*this = src;
	std::cout << "[Ice class] copy constractor" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	std::cout << "[Ice class] operator assingment" << std::endl;
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "[Ice class] destractor" << std::endl;
}

AMateria *Ice::clone() const
{
	std::cout << "[Ice class] clone() called" << std::endl;
	Ice *New_ice;

	try
	{
		New_ice = new Ice;
	}
	catch (const std::bad_alloc &b)
	{
		std::cerr << b.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (New_ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "I shoots an ice bolt at " << target.getName() << std::endl;
}
