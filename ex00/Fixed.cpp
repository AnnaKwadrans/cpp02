#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
    std::cout << "Fixed: default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &fixed) : _num(fixed._num)
{
    std::cout << "Fixed: copy constructor called" << std::endl;
    return ;    
}
Fixed& Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
    {
        _num = fixed._num;
    }
    std::cout << "Fixed: assignment operator called" << std::endl;
    return (*this);   
}



        ~Fixed(void);

        int getRawBits(void) const;
        void    setRawBits(int const raw);