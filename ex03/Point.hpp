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
	//Destructeur
	~Point(void);
	//Constructeur de copie
	Point(const Point& other);
	//Surcharge de l'operateur d'affectation
};

#endif