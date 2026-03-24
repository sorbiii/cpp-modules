#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int _bitValue;
		static int const _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &value);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed& max(const Fixed & a, Fixed& b);

		//operatory
};
	
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif