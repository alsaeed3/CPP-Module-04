/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/25 19:56:54 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

	std::cout << this->getType() << "DEFAULT Cat Constructor has been called" << std::endl;

	return;	
}

Cat::Cat( const Cat& source ) {

	std::cout << this->getType() << " Cat Copy Constructor has been called" << std::endl;

	*this = source;

	return;	
}

Cat&	Cat::operator=( const Cat& source ) {

	std::cout << this->getType() << " Cat Copy Assinment Operator has been called" << std::endl;

	if ( this != &source )
		this->type = source.type;

	return *this;	
}

Cat::~Cat( void ) {

	std::cout << this->getType() << " Cat Destructor has been called" << std::endl;

	return;	
}

void	Cat::makeSound( void ) const {

	std::cout << "Meowww!!!" << std::endl;

	return;	
}
