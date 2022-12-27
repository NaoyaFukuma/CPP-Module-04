/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:02:49 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:40:40 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <string>

# define MAX_SLOTS_NUM 4

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *materias_[MAX_SLOTS_NUM];

  public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(MateriaSource const &);
	MateriaSource &operator=(MateriaSource const &);

	AMateria *getMateria(std::string const &type);
	AMateria *createMateria(std::string const &type);
	void learnMateria(AMateria *);
};

#endif
