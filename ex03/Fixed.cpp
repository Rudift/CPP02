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
	_value = other._value;
}

//Surcharge de l'operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {  // Protection contre l'auto-affectation
		_value = other._value;
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

//Surcharges d'operateurs
std::ostream&	operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}

//	Operateurs de comparaisons
bool	Fixed::operator>(Fixed const rhs) const{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(Fixed const rhs) const{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=(Fixed const rhs) const{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(Fixed const rhs) const{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==(Fixed const rhs) const{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const rhs) const{
	return (this->_value != rhs._value);
}

//	Operateurs arithmetiques
Fixed	Fixed::operator+(Fixed const rhs) const{
	Fixed	result;

	result._value = this->_value + rhs._value;
	return(result);
}

Fixed	Fixed::operator-(Fixed const rhs) const{
	Fixed	result;

	result._value = this->_value - rhs._value;
	return(result);
}

Fixed	Fixed::operator*(Fixed const rhs) const{
	Fixed	result;

	result._value =(this->_value * rhs._value) / (1 << _nb_bits);
	return(result);
}

Fixed	Fixed::operator/(Fixed const rhs) const{
	Fixed	result;

	result._value = (this->_value * (1 << _nb_bits)) / rhs._value;
	return(result);
}

//Pre-incrementation
Fixed&	Fixed::operator++(){
	this->_value += 1;
	return (*this);
}
//Post_incrementation
Fixed	Fixed::operator++(int){
	Fixed	temp(*this);
	this->_value += 1;
	return (temp);
}

//Pre-decrementation
Fixed&	Fixed::operator--(){
	this->_value -= 1;
	return (*this);
}
//Post_decrementation
Fixed	Fixed::operator--(int){
	Fixed	temp(*this);
	this->_value -= 1;
	return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a < b ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b){
	return (a < b ? a: b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b){
	return (a > b ? a: b);
}