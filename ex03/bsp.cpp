/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 11:55:34 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 11:55:34 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calculateArea(Point const p1, Point const p2, Point const p3) {
	Fixed area;
	
	area = (p1.get_x() * (p2.get_y() - p3.get_y()) + 
			p2.get_x() * (p3.get_y() - p1.get_y()) + 
			p3.get_x() * (p1.get_y() - p2.get_y())) / Fixed(2);
	
	if (area < Fixed(0))
		area = area * Fixed(-1);
	return area;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed	aire_abc = calculateArea(a, b, c);
	
	Fixed	aire_pab = calculateArea(point, a, b);
	Fixed	aire_pbc = calculateArea(point, b, c);
	Fixed	aire_pca = calculateArea(point, c, a);
	
	if (aire_pab == Fixed(0) || aire_pbc == Fixed(0) || aire_pca == Fixed(0))
		return false;
	
	Fixed somme_aires = aire_pab + aire_pbc + aire_pca;
	
	return (aire_abc == somme_aires);
}