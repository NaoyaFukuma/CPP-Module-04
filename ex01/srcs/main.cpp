/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:38:09 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:53:25 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "test 1" << std::endl;
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	std::cout << "\ntest 2" << std::endl;
	{
		const Animal *k[10];

		try
		{
			for (int i = 0; i < 5; i++)
				k[i] = new Dog();
			for (int i = 5; i < 10; i++)
				k[i] = new Cat();
		}
		catch (const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}
		for (int i = 0; i < 10; i++)
			delete k[i];
	}
	std::cout << "\ntest 3" << std::endl;
	{
		Dog *dog1;

		try
		{
			dog1 = new Dog();
		}
		catch (const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}

		Dog dog2(*dog1);
		Dog dog3;

		dog3 = *dog1;
		delete dog1;
		dog2.set_idea(0, "world peace");
		std::string tmp[10] = {"world peace", "world peace", "world peace", "world peace", "world peace", "world peace", "world peace", "world peace", "world peace", "world peace"};
		dog3.set_ideas(0, 10, tmp);

		std::cout << dog2.get_idea(0) << std::endl;
		for (int i = 0; i < 11; ++i)
		{
			std::cout << dog3.get_idea(i) << std::endl;
		}

	}
	std::cout << "\ntest 4" << std::endl;
	{
		Cat *cat1;
		try
		{
			cat1 = new Cat();
		}
		catch (const std::bad_alloc &b)
		{
			std::cerr << b.what() << std::endl;
			std::exit(EXIT_FAILURE);
		}

		Cat cat2 = *cat1;
		Cat cat3;

		cat3 = *cat1;
		delete cat1;
		std::cout << cat2.get_idea(0) << std::endl;
		std::cout << cat3.get_idea(0) << std::endl;
	}
	std::cout << "\ntest 5" << std::endl;
	{
		Dog basic;
		{
			Dog tmp = basic;
		}
	}
	return (0);
}
