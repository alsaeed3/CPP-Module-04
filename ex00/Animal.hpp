/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/25 20:03:13 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	protected:

		std::string		type;

	public:

		Animal( void );
		Animal( std::string type );
		Animal( const Animal& source );
		Animal&		operator=( const Animal& source );
		virtual ~Animal( void );

		std::string		Animal::getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif