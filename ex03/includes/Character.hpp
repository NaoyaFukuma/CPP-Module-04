/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caracter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:38:42 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:58:43 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

# define MAX_SLOTS_NUM 4

class Character : public ICharacter
{
  private:
	std::string name_;
	AMateria *materias_[MAX_SLOTS_NUM];

  public:
	Character();
	Character(const std::string &name);
	Character(const Character &src);
	~Character();
	Character &operator=(const Character &rhs);
	std::string const &getName() const;
	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
