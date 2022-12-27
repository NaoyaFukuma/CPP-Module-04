/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:04:28 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/27 23:22:48 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource class] defalut constractor" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; ++i)
		this->materias_[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource class] destractor" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; ++i)
		delete	this->materias_[i];
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "[MateriaSource class] copy constractor" << std::endl;
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	std::cout << "[MateriaSource class] operator assingment" << std::endl;
	if (this != &rhs)
	{
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

AMateria *MateriaSource::getMateria(std::string const &type)
{
	std::cout << "[MateriaSource class] getMateria() called" << std::endl;
	for (int i = 0; i < MAX_SLOTS_NUM; ++i)
	{
		if (this->materias_[i] && this->materias_[i]->getType() == type)
			return (this->materias_[i]);
	}
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	std::cout << "[MateriaSource class] learntMateria() called" << std::endl;
	if (materia == NULL)
		return ;
	int	i = 0;
	while (this->materias_[i] && i < MAX_SLOTS_NUM)
		++i;
	if (3 < i)
	{
		std::cerr << "[MateriaSource class] \"" << materia->getType() << "\" MateriaSource inventory is full" << std::endl;
		return ;
	}
	std::cout << "[MateriaSource class] \"" << materia->getType() << "\" learn success" << std::endl;
	this->materias_[i] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	std::cout << "[MateriaSource class] createMateria() called" << std::endl;
	int	i = 0;

	while (this->materias_[i] && this->materias_[i]->getType() != type && i < MAX_SLOTS_NUM)
	{
		++i;
	}
	if (3 < i || !this->materias_[i])
	{
		std::cerr << "Not founnd " << type << std::endl;
		return NULL;
	}
	return this->materias_[i]->clone();
}
