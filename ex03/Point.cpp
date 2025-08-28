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

Point::Point(void){
	this->_x.setRawBits(0);
	this->_y.setRawBits(0);
}
Point::Point(float x, float y){
	this->_x.setRawBits((int)(x * (256)));
	this->_y.setRawBits((int)(y * (256)));
}
Point::~Point(void){

}

//Constructeur de copie
Point::Point(const Point& other){
	std::cout << "Copy constructor called" << std::endl;
	_x = other._x;
	_y = other._y;
}