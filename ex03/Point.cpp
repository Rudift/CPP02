/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-27 14:37:35 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-27 14:37:35 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Default constructor
Point::Point(void) : _x(0), _y(0) {

}

//Float constructor
Point::Point(float x, float y) : _x(x), _y(y) {

}

//Copy constructor
Point::Point(const Point& other) : _x(other._x), _y(other._y) {

}

//Surcharge de l'operateur d'affectation
Point&	Point::operator=(const Point& other){
	if (this != &other) { 
		this->_x = other._x;
		this->_y = other._y;
	}
	return (*this);
}

//Destructor
Point::~Point(void){

}

Fixed Point::get_x(void) const{
	return(_x);
}

Fixed Point::get_y(void) const{
	return(_y);
}