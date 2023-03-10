/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:56 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 22:57:07 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
  protected:
	std::string type_;

  public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();


	std::string getType() const;
	virtual void makeSound() const;
};

#endif
