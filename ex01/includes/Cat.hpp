/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:58:04 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:48:42 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
  private:
	Brain *brain_;

  public:
	Cat();
	Cat(const std::string &_type);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();

	virtual void makeSound() const;
	std::string get_idea(const int i);
	void set_idea(const int i, const std::string &_ideas);
	void set_ideas(const int begin, const int size, const std::string *_ideas);
};

#endif
