/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:41:59 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/27 22:59:33 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
	: name_("unset")
{
	std::cout << "[Character class] defalut constractor" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; i++)
		this->materias_[i] = NULL;
}

Character::Character(const std::string &name)
	: name_(name)
{
	std::cout << "[Character class] std::string argument constractor" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; i++)
		this->materias_[i] = NULL;
}

Character::Character(const Character &src)
{
	std::cout << "[Character class] copy constractor" << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "[Character class] destractor" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; i++)
		delete this->materias_[i];
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << "[Character class] operator assingment" << std::endl;
	if (this != &rhs)
	{
		name_ = rhs.name_;
		for (int i = 0; i < MAX_SLOTS_NUM; ++i)
		{
			if (this->materias_[i]->getType() != rhs.materias_[i]->getType())
			{
				delete this->materias_[i];
				this->materias_[i] = rhs.materias_[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	std::cout << "[Character class] getName() called" << std::endl;
	return (this->name_);
}

void Character::equip(AMateria *materia)
{
	std::cout << "[Character class] equip() called" << std::endl;
	int	i;

	if (!materia || (materia->getType() != "cure" && materia->getType() != "ice"))
	{
		std::cerr << "Unexisting Materia. No equip!!" << std::endl;
		return ;
	}
	i = 0;
	while (this->materias_[i] && i < MAX_SLOTS_NUM)
		i++;
	if (3 < i)
	{
		std::cerr << "Character materias_ is full" << std::endl;
		return ;
	}
	std::cout << "Character " << this->name_ << " equipped with " << materia->getType() << std::endl;
	this->materias_[i] = materia;
}

void Character::unequip(int idx)
{
	if (idx < 0 || 3 < idx)
	{
		std::cerr << "Can not unequip because idx is over range(0 ~ 3)" << std::endl;
		return ;
	}
	if (!this->materias_[idx])
		return ;
	this->materias_[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || 3 < idx)
	{
		std::cerr << "Can not use because idx is over range(0 ~ 3)" << std::endl;
		return ;
	}
	if (!this->materias_[idx])
	{
		std::cerr << "This materias_ do not set" << std::endl;
		return ;
	}
	this->materias_[idx]->use(target);
}
