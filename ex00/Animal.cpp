/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:41 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/25 19:57:07 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal( void ) : type( "Default" ) {

	std::cout << "DEFAULT Animal Constructor has been called" << std::endl;

	return;
}

Animal::Animal( std::string type ) : type( type ) {

	std::cout << this->type << " Animal Constructor has been called" << std::endl;

	return;
}

Animal::Animal( const Animal& source ) {

	std::cout << this->type << " Animal Copy Constructor has been called" << std::endl;

	*this = source;

	return;
}

Animal&		Animal::operator=( const Animal& source ) {

	std::cout << this->type << " Animal Copy Assignment Operator has been called" << std::endl;

	if ( this != &source )
		this->type = source.type;

	return *this;
}

Animal::~Animal( void ) {
	
	std::cout << this->type << " Animal Destructor has been called" << std::endl;

	return;
}

std::string		Animal::getType( void ) const {

	return this->type;
}

void			Animal::makeSound( void ) const {

	std::cout << this->type << " Animal make sound!!" << std::endl;

	return;
}