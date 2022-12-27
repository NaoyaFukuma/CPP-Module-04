/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:51:33 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:04:00 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Cure : public AMateria
{
  public:
	Cure();
	Cure(Cure const &src);
	~Cure();
	Cure &operator=(Cure const &rhs);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
