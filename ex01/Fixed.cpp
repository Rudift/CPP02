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

//Constructeurs
Fixed::Fixed(void): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	_value = n << _nb_bits;
}

Fixed::Fixed(float const f){
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(f * (1 << _nb_bits));
}

//Constructeur de copie
Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

//Surcharge de l'operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (other._value){
		_value = other.getRawBits();
	}else{
		_value = 0;
	}
	return (*this);
}

//Destructeur
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

//Fonctions Membres :

int		Fixed::getRawBits(void) const{
	std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	_value = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)_value / (1 << _nb_bits));
}

int		Fixed::toInt(void) const{
	return (_value >> _nb_bits);
}

//Surcharge d'operateur
std::ostream&	operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}


