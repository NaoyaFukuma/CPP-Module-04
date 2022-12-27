/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:07:57 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 17:03:52 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Ice : public AMateria
{
  public:
	Ice();
	Ice(Ice const &src);
	~Ice();
	Ice &operator=(Ice const &rhs);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
