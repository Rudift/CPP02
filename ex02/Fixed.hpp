/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-25 13:28:35 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-25 13:28:35 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#  include <string>
#  include <iostream>
#  include <cmath>


class Fixed{
	private:
		int	_value;
		static int const	_nb_bits = 8;
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);
#endif