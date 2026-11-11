#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int     fixedPoint;
        static const int    fractionalBits = 8;///allow cause its static const

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floatt);
        Fixed(const Fixed& other);
        Fixed& operator = (const Fixed& other);
        ~Fixed();

        ///comparison operators
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        /// arithmetic operators
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        ///increment/decrement
        Fixed& operator++();//pre, ++a;
        Fixed operator++(int);///post, a++; int is sth unreal
        Fixed& operator--();//--a
        Fixed operator--(int);//a--;

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ///static overload member function
        static Fixed& min(Fixed& x, Fixed& y);
        static const Fixed& min(const Fixed& x, const Fixed& y);
        static Fixed& max(Fixed& x, Fixed& y);
        static const Fixed& max(const Fixed& x, const Fixed& y);
};
///this is overload of operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif