/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:03:57 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 15:14:09 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"


class Dog : public A_Animal
{
  private:
	Brain *brain_;

  public:
	Dog();
	Dog(const std::string &_type);
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	virtual void makeSound() const;
	std::string get_idea(const int i);
	void set_idea(const int i, const std::string &_ideas);
	void set_ideas(const int begin, const int size, const std::string *_ideas);
};

#endif
