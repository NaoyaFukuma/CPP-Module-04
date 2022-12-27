/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:53:50 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:34:52 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Cure.hpp"
#include <cstdlib>
#include <iostream>

Cure::Cure()
	: AMateria("cure")
{
	std::cout << "[Cure class] defalut constractor" << std::endl;
}

Cure::Cure(Cure const &src)
	: AMateria("cure")
{
	*this = src;
	std::cout << "[Cure class] copy constractor" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	std::cout << "[Cure class] operator assingment" << std::endl;
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "[Cure class] destractor" << std::endl;
}

AMateria *Cure::clone() const
{
	std::cout << "[Cure class] clone() called" << std::endl;
	Cure *New_cure;

	try
	{
		New_cure = new Cure;
	}
	catch (const std::bad_alloc &b)
	{
		std::cerr << b.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (New_cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "<< target.getName() << "\'s wounds *" << std::endl;
}
