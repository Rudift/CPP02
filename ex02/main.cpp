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

int	main(void){

	Fixed	res;
	Fixed	const a( 10 );
	Fixed	 b( 42.42f );
	res = a+b;
	std::cout << a << " + " << b << " = " << res << std::endl;
	res = a - b;
	std::cout << a << " - " << b << " = " << res << std::endl; 
	res = a * b;
	std::cout << a << " * " << b << " = " << res << std::endl; 
	res = b / a;
	std::cout << b << " / " << a << " = " << res << std::endl;
	std::cout << "++" << b << " = " << ++b << std::endl;
	std::cout << b++ << "++" << " = " << b << std::endl;
	std::cout << "--" << b << " = " << --b << std::endl;
	std::cout << b-- << "--" << " = " << b << std::endl;
	std::cout << "Min = " << Fixed::min(a, b) << std::endl;
	std::cout << "Max = " << Fixed::max(a, b) << std::endl;
	return 0;
}

// Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;
	
// 	std::cout << Fixed::max( a, b ) << std::endl;