/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:16 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 14:29:53 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {

	std::cout << "Dog Default Constructor has been called" << std::endl;

	return;	
}

Dog::Dog( const Dog& source_object ) : Animal( "Dog" ) {

	std::cout << "Dog Copy Constructor has been called" << std::endl;

	*this = source_object;

	return;	
}

Dog&	Dog::operator=( const Dog& source_object ) {

	std::cout << "Dog Copy Assinment Operator has been called" << std::endl;

	if ( this != &source_object )
		this->_type = source_object._type;

	return *this;	
}

Dog::~Dog( void ) {

	std::cout << "Dog Destructor has been called" << std::endl;

	return;	
}

void	Dog::makeSound( void ) const {

	std::cout << "Barkkk!!!" << std::endl;

	return;	
}
