/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:59:04 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 16:51:01 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
	: type_("unset")
{
	std::cout << "[AMateria class] defalut constractor" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "[AMateria class] copy constractor" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const &type)
	: type_(type)
{
	std::cout << "[AMateria class] std::string argument constractor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria class] destractor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << "[AMateria class] operator assingment" << std::endl;
	this->type_ = rhs.type_;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type_);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Nothing" << target.getName() << std::endl;
}
