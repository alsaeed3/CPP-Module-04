/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:23 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 21:53:44 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;


	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	int size = 10;
	Animal* animals[size];
	Animal bla;
	std::cout << std::endl;
	for (int i = 0; i < size + 1; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "---------------------" << std::endl;
	for (int i = size; i > -1; i--)
		delete animals[i];
	std::cout << "---------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	
	std::cout << "Checking if the Copy is Deep or Shallow" << std::endl;
	std::cout << std::endl;
	std::cout << "Check 1:" << std::endl;
	std::cout << std::endl;
	Dog	originalDog;
	Dog	copiedDog = originalDog;
	std::cout << std::endl;
	copiedDog.changeIdea( 0, "Deep Idea" );
	if ( originalDog.get)
	std::cout << "Check 2:" << std::endl;
	std::cout << std::endl;
	Dog tmp;
	std::cout << std::endl;
	{
		Dog basic = tmp;
	}
	std::cout << std::endl;
	return 0;
}