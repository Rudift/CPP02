/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-25 13:28:23 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-25 13:28:23 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Déclaration de la fonction BSP
bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void){
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(2.5f, 5.0f);

	std::cout << "=== Test de la fonction BSP ===" << std::endl;
	std::cout << "Triangle: A(0,0), B(5,0), C(2.5,5)" << std::endl << std::endl;

	// Test 1: Point à l'intérieur
	Point inside(2.5f, 2.0f);
	std::cout << "Point (2.5, 2.0) - À l'intérieur: " << (bsp(a, b, c, inside) ? "OUI" : "NON") << std::endl;

	// Test 2: Point à l'extérieur
	Point outside(10.0f, 10.0f);
	std::cout << "Point (10.0, 10.0) - À l'intérieur: " << (bsp(a, b, c, outside) ? "OUI" : "NON") << std::endl;

	// Test 3: Point sur un côté (doit retourner false)
	Point onEdge(2.5f, 0.0f);
	std::cout << "Point (2.5, 0.0) - À l'intérieur: " << (bsp(a, b, c, onEdge) ? "OUI" : "NON") << std::endl;

	// Test 4: Point = sommet (doit retourner false)
	Point vertex(0.0f, 0.0f);
	std::cout << "Point (0.0, 0.0) - À l'intérieur: " << (bsp(a, b, c, vertex) ? "OUI" : "NON") << std::endl;

	// Test 5: Autre point à l'intérieur
	Point inside2(1.0f, 1.0f);
	std::cout << "Point (1.0, 1.0) - À l'intérieur: " << (bsp(a, b, c, inside2) ? "OUI" : "NON") << std::endl;

	return 0;
}