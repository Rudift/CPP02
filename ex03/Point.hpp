/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-27 14:33:48 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-27 14:33:48 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#  include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	//Constructeur
	Point(void);
	//Constructeur float
	Point(float x, float y);
	//Destructeur
	~Point(void);
	//Constructeur de copie
	Point(const Point& other);
	//Surcharge de l'operateur d'affectation
	Point& operator=(const Point& other);
	//Accesseurs
	Fixed get_x(void) const;
	Fixed get_y(void) const;

};

#endif
