/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:16 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/25 19:58:38 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {

	std::cout << this->getType() << "DEFAULT Dog Constructor has been called" << std::endl;

	return;	
}

Dog::Dog( const Dog& source ) {

	std::cout << this->getType() << " Dog Copy Constructor has been called" << std::endl;

	*this = source;

	return;	
}

Dog&	Dog::operator=( const Dog& source ) {

	std::cout << this->getType() << " Dog Copy Assinment Operator has been called" << std::endl;

	if ( this != &source )
		this->type = source.type;

	return *this;	
}

Dog::~Dog( void ) {

	std::cout << this->getType() << " Dog Destructor has been called" << std::endl;

	return;	
}

void	Dog::makeSound( void ) const {

	std::cout << "Barkkk!!!" << std::endl;

	return;	
}
