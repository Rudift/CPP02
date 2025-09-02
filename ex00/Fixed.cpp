/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-25 13:28:49 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-25 13:28:49 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructeur
Fixed::Fixed(void): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

//Constructeur de copie
Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

//Surcharge de l'operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignement operator called" << std::endl;
		_value = other.getRawBits();
	return (*this);
}

//Destructeur
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

//Fonctions Membres :

int	Fixed::getRawBits(void) const{
	std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawbits member function called" << std::endl;
	_value = raw;
}


