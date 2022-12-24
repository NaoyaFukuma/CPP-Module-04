/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:38:09 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/24 22:11:18 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	std::cout << "\e[33m<<<  I'll start checking Animal class!   >>>  \e[m" << std::endl;

	Animal *meta = new Animal();
	Animal *j = new Dog();
	Animal *i = new Cat();

	std::cout << "j Type: " << j->getType() << " " << std::endl;
	std::cout << "i Type: " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	{
		Animal tmp;
		Dog tmp_dog;
		Cat tmp_cat;
		Animal &meta_ref = tmp;
		Animal &j_ref = dynamic_cast<Animal&>(tmp_dog);
		Animal &i_ref = dynamic_cast<Animal&>(tmp_cat);

		std::cout << "\nj_ref Type: " << j->getType() << " " << std::endl;
		std::cout << "i_i_ref Type: " << i->getType() << " " << std::endl;
		i_ref.makeSound();
		j_ref.makeSound();
		meta_ref.makeSound();
	}

	std::cout << std::endl;
	std::cout << "\e[31m<<<  I'll start checking Wrong Animal class!   >>>  \e[m" << std::endl;

	const WrongAnimal *wrong_meta = new WrongAnimal();
	const WrongAnimal *wrong_i = new WrongCat();

	std::cout << "Wrong_meta Type: " << wrong_meta->getType() << " " << std::endl;
	std::cout << "Wrong_i Type: " << wrong_i->getType() << " " << std::endl;
	wrong_meta->makeSound();
	wrong_i->makeSound();

	delete wrong_meta;
	delete wrong_i;
}
