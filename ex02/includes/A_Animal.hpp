/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:56 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 15:08:33 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class A_Animal
{
  protected:
	std::string type_;

  public:
	A_Animal();
	A_Animal(std::string type);
	A_Animal(const A_Animal &src);
	A_Animal &operator=(const A_Animal &rhs);
	virtual ~A_Animal();


	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif
