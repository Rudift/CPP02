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
}